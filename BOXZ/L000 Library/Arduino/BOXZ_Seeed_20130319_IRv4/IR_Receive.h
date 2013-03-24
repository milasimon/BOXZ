//www.yaocoo.com
//品牌 遥酷
//红外多媒体遥控器
//HTPC电脑遥控器红外免驱(HID即插即用)
//take care "shift bit"

unsigned long ir_code_r[] = {
 //shift bit 0x800F0xxx
  0x800F040C,    //电源
  0x800F041B,    //上一曲
  0x800F0415,    //快退
  0x800F0417,    //录像
  0x800F0418,    //暂停
  0x800F0419,    //停止
  0x800F0414,    //快进
  0x800F041A,    //下一曲
  0x800F0416,    //播放
  0x800F0423,    //返回
  0x800F040D,    //Windows
  0x800F040F,    //i（信息）
  0x800F0420,    //向左
  0x800F041E,    //向上
  0x800F0421,    //向右
  0x800F041F,    //向下
  0x800F0422,    //OK（确认）
  0x800F0410,    //音量+
  0x800F040E,    //静音
  0x800F0412,    //上翻+
  0x800F0411,    //音量-
  0x800F0413,    //下翻-
  0x800F0448,    //电视录像
  0x800F0426,    //节目单
  0x800F0425,    //电视播放
  0x800F0424,    //影碟机
  0x800F0401,    //1
  0x800F0402,    //2
  0x800F0403,    //3
  0x800F0404,    //4
  0x800F0405,    //5
  0x800F0406,    //6
  0x800F0407,    //7
  0x800F0408,    //8
  0x800F0409,    //9
  0x800F041D,    //*
  0x800F0400,    //0
  0x800F041C,    //#
  0x800F040A,    //CLEAR
  0x800F040B,    //ENTER
 //shift bit 0x800F8xxx
  0x800F840C,    //电源
  0x800F841B,    //上一曲
  0x800F8415,    //快退
  0x800F8417,    //录像
  0x800F8418,    //暂停
  0x800F8419,    //停止
  0x800F8414,    //快进
  0x800F841A,    //下一曲
  0x800F8416,    //播放
  0x800F8423,    //返回
  0x800F840D,    //Windows
  0x800F840F,    //i（信息）
  0x800F8420,    //向左
  0x800F841E,    //向上
  0x800F8421,    //向右
  0x800F841F,    //向下
  0x800F8422,    //OK（确认）
  0x800F8410,    //音量+
  0x800F840E,    //静音
  0x800F8412,    //上翻+
  0x800F8411,    //音量-
  0x800F8413,    //下翻-
  0x800F8448,    //电视录像
  0x800F8426,    //节目单
  0x800F8425,    //电视播放
  0x800F8424,    //影碟机
  0x800F8401,    //1
  0x800F8402,    //2
  0x800F8403,    //3
  0x800F8404,    //4
  0x800F8405,    //5
  0x800F8406,    //6
  0x800F8407,    //7
  0x800F8408,    //8
  0x800F8409,    //9
  0x800F841D,    //*
  0x800F8400,    //0
  0x800F841C,    //#
  0x800F840A,    //CLEAR
  0x800F840B,    //ENTER
};

