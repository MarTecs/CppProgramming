


/**
 *
 *
 *
 * 假设hadoop服务器的地址为hdfs://itcast01:9000,现在需要把服务器上路径为“/jdk.avi”的文件下载到本地c盘，并重命名为jdk
 *
 */


public static void main(String[] args) {
  FileSystem fs = FileSystem.get(new URI("hdfs://itcast:9000"), new Configuration());
  InputStream is = fs.open(new Path("/jdk.avi"));
  OutputStream os = new FileOutputStream(new File("c://jdk"));
  IOUtils.copyBytes(is, os, 2048, true);
}




/**
 * 删除hadoop服务器上“/word”文件夹
 */
public static void main(String[] args) {

  FileSystem fs = FileSystem.get(new URI("hdfs://itcast:9000"),new Configuration(), "root");
  boolean flag = fs.delete(new Path("/word"), true);
  System.out.println(flag);
}


/**
 * 向hadoop服务器上传本地路径为c:/w.txt的文件，放在“/”下，并重命名为“words.txt”
 */
public static void main(String[] args) {
  FileSystem fs = FileSystem.get(new URI("hdfs://itcast:9000"), new Configuration(), "root");
  FSDataOutputStream fsds = fs.create(new Path("/words.txt"));
  InputStream is = new FileInputStream(new File("c://w.txt"));
  IOUtils.copyBytes(is, fsds, 2048, true);

}

/**
 * 客户端需要调用服务器端的sayHi方法，在客户端生成结果
 */

public interface Barty{


  public static final long versionID = 10010;
  public String sayHi(String name);


}


public class RPCServer implements Barty{

  public static void main(String[] args) {
    Server server = new RPC.Builder(new Configuration())
                    .setInstance(new RPCServer())
                    .setBindAddress("192.168.8.100")
                    .setPort(9527)
                    .setProtocol(Barty.class)
                    .bind();
  server.start();
  }

  @Override
  public String getName(String name)
  {
    return "Hi~" + name;
  }
}


public class RPCClient{

  public static void main(String[] args) {
    Barty proxy = RPC.getProxy(Barty.class, 10010, new InetSocketAddress("192.168.8.100", 9527), new Configuration() );
    String str = proxy.sayHi("tom");
    System.out.println(str);
  }




}


/**
 * 在/root文件夹下有一个word.txt文件，现在需要对文件中的单词进行一个频率统计，
 * 输出结果的路径为：/root/wcout，word.txt的文件内容如下：
 */

public class WCMapper extends Mapper<LongWritable, Text, Text, LongWritable>
{
  protected void map(LongWritable key, Text text, Context context)
  {
    String line = value.toString();
    String[] words = line.split(" ");
    for (String str : words)
    {
      context.write(new Text(str), new LongWritable(1));
    }
  }
}

public class WCReducer extends Reducer<Text, LongWritable, Text, LongWritable>
{
  @Override
  protected void reduce(Text key, Iterable<LongWritable> values, Context context)
  {
    long counter = 0;
    for (LongWritable l : values) {
      counter += l.get();
    }
    context.write(key, new LongWritable(counter));
  }
}
public class WordCount{

  public static void main(String[] args)
  {
    Configuration conf = new Configuration();
    conf.setInt("mapreduce.client.submit.file.replication", "20");
  }

}
