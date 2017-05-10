package ardrone_autonomy;

public interface navdata_video_stream extends org.ros.internal.message.Message {
  static final java.lang.String _TYPE = "ardrone_autonomy/navdata_video_stream";
  static final java.lang.String _DEFINITION = "Header header\nfloat64 drone_time\nuint16 tag\nuint16 size\nuint8 quant\nuint32 frame_size\nuint32 frame_number\nuint32 atcmd_ref_seq\nuint32 atcmd_mean_ref_gap\nfloat32 atcmd_var_ref_gap\nuint32 atcmd_ref_quality\nuint32 desired_bitrate\nint32 data2\nint32 data3\nint32 data4\nint32 data5\nuint32 fifo_queue_level\n";
  std_msgs.Header getHeader();
  void setHeader(std_msgs.Header value);
  double getDroneTime();
  void setDroneTime(double value);
  short getTag();
  void setTag(short value);
  short getSize();
  void setSize(short value);
  byte getQuant();
  void setQuant(byte value);
  int getFrameSize();
  void setFrameSize(int value);
  int getFrameNumber();
  void setFrameNumber(int value);
  int getAtcmdRefSeq();
  void setAtcmdRefSeq(int value);
  int getAtcmdMeanRefGap();
  void setAtcmdMeanRefGap(int value);
  float getAtcmdVarRefGap();
  void setAtcmdVarRefGap(float value);
  int getAtcmdRefQuality();
  void setAtcmdRefQuality(int value);
  int getDesiredBitrate();
  void setDesiredBitrate(int value);
  int getData2();
  void setData2(int value);
  int getData3();
  void setData3(int value);
  int getData4();
  void setData4(int value);
  int getData5();
  void setData5(int value);
  int getFifoQueueLevel();
  void setFifoQueueLevel(int value);
}
