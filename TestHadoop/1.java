


/**
 *
 *
 *
 * 假设hadoop服务器的地址为hdfs://itcast01:9000,现在需要把服务器上路径为“/jdk.avi”的文件下载到本地c盘，并重命名为jdk
 *
 */


public static void main(String[] args) {
  FileSystem fs = FileSystem.get(new URI("hdfs://itcast:9000"), new Configuration());
  InputStream in = fs.get(new Path("/jdk.avi"));
  OutputStream os = new FileOutputStream(new File("c://jdk"));
  IOUtils.copyBytes(in. os, 2048, true);

}

/**
 * 删除hadoop服务器上“/word”文件夹
 */

public static void main(String[] args) {
  FileSystem fs = FileSystem.get(new URI("hdfs://itcast:9000"), new Configuration());
  boolean flag = fs.delete(new Path("/word"), true);
  System.out.println(flag);

}


/**
 * 向hadoop服务器上传本地路径为c:/w.txt的文件，放在“/”下，并重命名为“words.txt”
 */


public static void main(String[] args) {
  fs = FileSytem.get(new URI("hdfs://itcast:9000"), new Configuration(), "root");
  FSDataOutputStream out = fs.create(new Path("/words.txt"));
  FileInputStream in = new FileInputStream(new File("c://w.txt"));
  IOUtils.copyBytes(in, out, 2048, true);
}


/**
 * 客户端需要调用服务器端的sayHi方法，在客户端生成结果
 */
public interface Barty  {
  public static final long versionID = 10010;
  public String sayHi(String name);

}


public class RPCServer implements Barty{

  public static void main(String[] args) throws HadoopIllegalArgumentException, IOException  {

    Server server = new RPC.Builder(new Configuration())
                        .setInstance(new RPCServer())
                        .setBindAddress("192.168.8.100")
                        .setPort(9527)
                        .setProtocol(Barty.class);
                        .build();
    server.start();
  }


  @Override
	public String sayHi(String name) {
		return "HI~" + name;
	}

}


public class RPCClient {

  public static void main(String[] args) {
    Barty proxy = RPC.getProxy(Barty.class, 10010, new InetSocketAddress("192.168.8.100", 9527), new Configuration());
    String str = proxy.sayHi("tomcat");
    System.out.println(str);
  }

}


/**
 * 在/root文件夹下有一个word.txt文件，现在需要对文件中的单词进行一个频率统计，
 * 输出结果的路径为：/root/wcout，word.txt的文件内容如下：
 */
