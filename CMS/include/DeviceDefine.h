#ifndef DEVICE_DEFINE_H
#define DEVICE_DEFINE_H

#include "..\Include\LHYDeviceDefine.h"
//#include "..\Common\GlobalFuncs.h"
#define DEVICE_ERR_OK				0
#define DEVICE_ERR_INVALIDPARAM		-1
#define DEVICE_ERR_INVALIDHANDLE	-2
#define DEVICE_ERR_INVALIDDEVTYPE	-3
#define DEVICE_ERR_ALLOCMEMORY		-4
#define DEVICE_ERR_INITFUNCTIONS	-5
#define DEVICE_ERR_NOTINITED		-6
#define DEVICE_ERR_USERPASSWD		-7
#define DEVICE_ERR_LOGONFULL		-8
#define DEVICE_ERR_CHNOTEXIST		-9		//通道不存在
#define DEVICE_ERR_NOTOPENED		-10
#define DEVICE_ERR_UNSUPPORT		-11		//不支持的功能
#define DEVICE_ERR_INVALIDFILE		-12		//文件无效
#define DEVICE_ERR_FILEREAD			-13
#define DEVICE_ERR_UPGRADING		-14		//正在升级
#define DEVICE_ERR_STREAMNOTOPEN	-15		//流播放没有打开
#define DEVICE_ERR_NOTPLAYING		-16
#define DEVICE_ERR_FILENOTOPEN		-17
#define DEVICE_ERR_CONNECT			-18
#define DEVICE_ERR_SEND				-19
#define DEVICE_ERR_RECV				-20
#define DEVICE_ERR_RIGHT			-21
#define DEVICE_ERR_DISKNOTEXIST		-22
#define DEVICE_ERR_TALKING			-23	//正在对讲
#define DEVICE_ERR_OPENFILE			-24 //打开文件失败
#define DEVICE_ERR_TIMEOUT			-25	//操作超时
#define DEVICE_ERR_FAIL				-30
#define DEVICE_CHANNELFULL			-31
#define DEVICE_DEVICENOEXIST		-32

#define DEVICE_ERR_UNKNOWFILEEXT	-51		//无法识别的文件扩展名

#define DEVICE_ERR_NOENOUGHDATA		-61		//解码时数据数据不够

#define MAX_PACK_SIZE	1024

#define PTZ_LEFT_START  0		//value=speed
#define PTZ_RIGHT_START	1		//value=speed
#define PTZ_UP_START	2		//value=speed
#define PTZ_DOWN_START	3		//value=speed
#define PTZ_IRISADD_START 4
#define PTZ_IRISDEC_START 5
#define PTZ_FOCUSADD_START 6
#define PTZ_FOCUSDEC_START 7
#define PTZ_ZOOMADD_START  8
#define PTZ_ZOOMDEC_START  9
#define PTZ_POINT_CALL    10	//value=presetno
#define PTZ_POINT_PRESET  11	//value=presetno
#define PTZ_AUTO_START	  12
//PTZ_STOP		 =	13,
#define PTZ_LEFT_STOP	  14
#define PTZ_RIGHT_STOP	  15
#define PTZ_UP_STOP	      16
#define PTZ_DOWN_STOP     17
#define PTZ_IRISADD_STOP  18
#define PTZ_IRISDEC_STOP  19
#define PTZ_FOCUSADD_STOP 20
#define PTZ_FOCUSDEC_STOP 21
#define PTZ_ZOOMADD_STOP  22
#define PTZ_ZOOMDEC_STOP  23
#define PTZ_LIGHT_START	  24
#define PTZ_LIGHT_STOP	  25
#define PTZ_RAIN_START	  26
#define PTZ_RAIN_STOP	  27
#define PTZ_TRACK_START   28
#define PTZ_TRACK_STOP	  29
#define PTZ_DEC_OPEN	  30		//value=devno
#define PTZ_DEC_CLOSE	  31		//value=devno
#define PTZ_AUTO_STOP	  32
#define PTZ_POINT_CLEAR	  33		//value=presetno

#define PTZ_GET_ADDRESS	  41		//value=(int *)address
#define PTZ_SET_ADDRESS	  42		//value=address
#define PTZ_CYCLE_START   43
#define PTZ_CYCLE_STOP	  44
//add 20131221
#define PTZ_POINT_DELETE  45
#define PTZ_POINT_DELETEALL 46
#define PTZ_CYCLE_SET		47
#define PTZ_LR_LEFT			48
#define PTZ_LR_RIGHT		49
#define PTZ_LR_START		50
#define PTZ_LR_STOP			51
#define PTZ_LR_SET			52
#define PTZ_DESIGN_START	53
#define PTZ_DESIGN_STOP		54
#define PTZ_DESIGN_CALL		55
#define PTZ_DESIGN_DELETE	56
#define PTZ_RESET			57
//end

#define PLAY_CTRL_GETPOSITION	0		//远程回放获取位置 pdwOutValue:获取播放位置
#define PLAY_CTRL_SETPOSITION	1		//远程回放定位     dwInValue:设置播放位置(秒)
#define PLAY_CTRL_START			2		//启动远程回放
#define PLAY_CTRL_STARTAUDIO	3		//打开声音
#define PLAY_CTRL_STOPAUDIO		4		//关闭声音
#define PLAY_CTRL_SETVOLUME		5		//设置音量，dwInValue:设置的音量0-10000
#define PLAY_CTRL_NORMAL		6		//远程回放正常播放
#define PLAY_CTRL_PAUSE			7		//暂停远程回放
#define PLAY_CTRL_RESUME		8
#define PLAY_CTRL_SLOW			9		//慢放,dwInValue:慢放的倍数
#define PLAY_CTRL_FAST			10		//快放，dwInValue:快放的倍数
#define PLAY_CTRL_FRAME			11		//单帧播放，
#define PLAY_CTRL_GETBUFFERPOS	12		//远程回放获取缓冲位置 pdwOutValue:缓冲位置(1-100)

#define PROTOCOL_TCP		0
#define PROTOCOL_UDP		1
#define PROTOCOL_MULTICAST	2

#define IMAGE_TYPE_BMP		0x00			//BMP文件
#define IMAGE_TYPE_JPG		0x01			//JPG文件

#define SEARCH_STATUS_NOTSEARCH	1		//没有启动搜索
#define SEARCH_STATUS_SEARCHING	2		//正在搜索
#define SEARCH_STATUS_END		3		//搜索已完成

#define SEARCHFILE_NOTSEARCH	-1		//没有搜索文件
#define SEARCHFILE_SEARCHING	0		//正在搜索文件
#define SEARCHFILE_END			1		//搜索文件已完成

#define DEVICE_MSG_ALARM		1000		//报警
#define DEVICE_MSG_CHBREAK		1001		//通道断开
#define DEVICE_MSG_LOGINBREAK	1002		//登录断开
#define DEVICE_MSG_COMDATA		1003		//串口数据
#define DEVICE_MSG_SNAPSHOT		1004
#define DEVICE_MSG_CLOSECH		1005
#define DEVICE_MSG_LINKFULL		1006


#define DEVICE_DEVNETPARAM		1
#define Device_DEVFACPARAM		2
#define DEVICE_DEVVOIPARAM		3
#define Device_DEVVIDPARAM		4
#define Device_DEVABIPARAM		5
#define Device_DEVREBPARAM		6
#define Device_DEVOSDPARAM		7
#define Device_DEVPICPARAM		8


typedef struct tagAVFrameHeader AVFrameHeader;
typedef struct tagUPGRADE_PROGRESS UPGRADE_PROGRESS;

typedef void (__stdcall *SearchDevNotify)(int nDevType,LPCSTR sDevName,LPCSTR sUrl,BYTE MacAddr[6],
										  WORD wWebPort,WORD wDataPort,LPCSTR sNetmask,LPCSTR sGateWay,
										  LPCSTR sDNS,LPCSTR sMultiIp,WORD wMultiPort,int nChCount,void *pcontext,DEVSEARCHINFO* pDeviceInfo);
typedef void (__stdcall *DeviceMsgCallback)(HANDLE hDevice, DWORD dwCmd,DWORD dwChannel,void *pBuf,DWORD dwBufSize,void *pcontext);
/*typedef void (__stdcall *MyAVStreamCallback)(HANDLE hDevice,int nChannel,int nStreamNo,AVFrameHeader *pFrameHeader,
											 PBYTE pData,void *pcontext);*///6.13屏蔽
typedef void (__stdcall *MyAVStreamCallback)(HANDLE hDevice,int nChannel,int nStreamNo,BOOL nKeyFrame,AVFrameHeader *pFrameHeader,
											 PBYTE pData,DWORD dwIndex,DWORD nHeight,DWORD nWidth,void *pcontext);
typedef void (__stdcall *UpgradeDevProgress)(HANDLE hDevice,UPGRADE_PROGRESS *pUpProgress,void *pcontext);
typedef void (__stdcall *SearchDevFileCallback)(HANDLE hSearch,int nChannel,LPCSTR FileName, DWORD dwBytes,DWORD dwMillSec,SYSTEMTIME *pFileTime,void *pcontext);
typedef void (__stdcall *DeviceJpgCallback)(HANDLE hDevice,int nChannel,void *pBuf,DWORD dwBufSize,void *pcontext);
typedef void (__stdcall *MyDrawCallback)(HDC hDC,SIZE *pImageSize,void *pcontext);
typedef void (__stdcall *MyYUVCallback)(void *pY,void *pU,void *pV,unsigned long nImageWidth,unsigned long nImageHeight,unsigned long nStride,void *pcontext);

typedef struct tagInterfaceInfo
{
	int	 nDevType;
	char sDevDesc[32];
	char sFileName[MAX_PATH];
	DWORD dwReserve[4];
}InterfaceInfo;

typedef struct tagAV_INFO
{
	DWORD	dwVideoEncTag;
#define ENCODE_VIDEO_DIVX	0x58564944		//DIVX
#define ENCODE_VIDEO_XVID	0x44495658		//XVID
#define ENCODE_VIDEO_HISI	0x49534948		//HISI
#define ENCODE_VIDEO_HOLD	0x444C4F48		//HOLD
#define ENCODE_VIDEO_MP4X	0x5834504D		//MP4X
#define ENCODE_VIDEO_H264	0x34363248		//H264
#define ENCODE_VIDEO_MJPG	0x47504A4D		//MJPG
#define ENCODE_VIDEO_LERO	0x47563248		//LERO
	WORD	wImageWidth;
	WORD	wImageHeight;
	DWORD	wAudioEncTag;
#define ENCODE_AUDIO_MP3	0x55			//MP3
#define ENCODE_AUDIO_G722 	0x65			//G.722	
#define ENCODE_AUDIO_G711	0x25			//G.711
#define ENCODE_AUDIO_G711U	0x26			//G.711_U
#define ENCODE_AUDIO_PCMU	0x14
#define	ENCODE_AUDIO_PCMA	0x15
#define ENCODE_AUDIO_AG711	0x27			//G.711
#define ENCODE_AUDIO_UG711	0x28			//G.711_U
//#define ENCODE_AUDIO_G723	0x14			//G.723
#define ENCODE_AUDIO_G726OLD 0x63			//G.726Old 
#define ENCODE_AUDIO_G726	0x64			//G.726
#define ENCODE_AUDIO_G729	0x83			//G.729
#define ENCODE_AUDIO_AMR	0xFE
#define ENCODE_AUDIO_AAC	0xFF			//AAC
	DWORD	dwAudioSamples;
	WORD	dwAudioChannels;
	WORD	wAudioBitRate;
}AV_INFO;

typedef struct tagRECFILE_DATE
{
	DWORD	dwYear;
	BYTE	bMonth;
	BYTE	bDay;
	BYTE	bReserve[2];
}RECFILE_DATE;

typedef struct tagRECFILE_TIME
{
	BYTE	bHour;
	BYTE	bMinute;
	BYTE	bSecond;
	BYTE	bReserve;
}RECFILE_TIME;

typedef struct tagAVFrameHeader
{
	DWORD	dwVideoSize;//视频大小
	DWORD	dwTimeTick;//时间戳
	WORD	nImgWidth;//视频宽度
	WORD	nImgHeight;//视频高度
	DWORD	dwAudioSize;//音频大小
	WORD	wKeyFrame;//关键帧i,p,b
	WORD	wReserved;//预留位
}AVFrameHeader;

typedef struct tagUPGRADE_PROGRESS
{
	int	nUpStatus;
#define UPGRADE_SENDING 1
#define UPGRADE_UPGRADING 2
#define UPGRADE_END		3
	LPCSTR pCurFile;		//当前升级的文件
	int	nCurProgress;		//当前文件进度
	int	nTotalProgress;	//总进度
	int	nErrorCode;		//错误码
#define UPGRADE_ERR_OK			0	//正常
#define UPGRADE_ERR_OPENFILE	-1	//打开文件错误
#define UPGRADE_ERR_FILECHECK	-2	//升级文件非法
#define UPGRADE_ERR_READ		-3	//读取数据错误
#define UPGRADE_ERR_SEND		-4	//发送数据错误
#define UPGRADE_ERR_RECV		-5	//接收数据错误
#define UPGRADE_ERR_MEM			-6	//内存分配失败
#define UPGRADE_ERR_CRC			-7  //设备端CRC校验错误
#define UPGRADE_ERR_ABORT		-8	//升级中止(可能是设备重启等原因)
}UPGRADE_PROGRESS;

typedef struct tagDISK_STATE
{
	int hdCount;			// 硬盘总数
	int hdtype[8];			// 硬盘类型
	int hdstate[8];			// 硬盘状态
	int totalsize[8];		// 硬盘空间大小
	int freesize[8];		// 硬盘剩余空间
}DISK_STATE;

typedef struct tagDeviceInfo
{
	int		nDevType;
	char	sName[32];
	char	sUrl[64];
	WORD	wPort;
	DWORD	nChCount;		//通道数
	WORD	wReserve;
}DeviceInfo;

typedef struct tagDataPacket
{
	unsigned char	bIsDataHead;		//是否是一帧中的第一包
	unsigned char	nChannel;			//通道号(序号从0开始)
	unsigned short	nBufSize;			//有效数据大小(0-PACK_SIZE)
	unsigned long	nPacketID;			//数据包在一帧中的序号
	AVFrameHeader	FrameHeader;		//帧头信息
	unsigned char	PackData[MAX_PACK_SIZE];//数据缓冲
}DataPacket;

typedef struct tagRecordInfo
{
	char			sFileName[MAX_PATH];
	SYSTEMTIME		stStartTime;
	unsigned long	dwStartTimeTick;
	unsigned long	dwLastTimeTick;
	unsigned long	dwBytesWrited;
	unsigned long	dwMilliSecondWrited;
	unsigned long	bNewFile;
}RecordInfo;

//对应DEVICE_MSG_ALARM
typedef struct tagDeviceAlarmInfo
{
	unsigned long	dwAlarmType;//报警类型
#define ALARM_MOTION_DETECT	1
#define ALARM_IN_ALARM		2
#define ALARM_VIDEO_LOST	3
#define ALARM_VIDEO_COVER	4
	unsigned long	nChannel;//报警通道
	SYSTEMTIME		stAlarmTime;//报警时间
	unsigned long	nAssociatRec;//
	unsigned long	dwReserve;//预留
}DeviceAlarmInfo;

typedef struct tagComConfig
{
	DWORD	dwBaudRate;
	BYTE	bDatabit;
	BYTE	bStopbit;
	BYTE	bCheckbit;
	BYTE	bFlowctrl;
}ComConfig;

//对应DEVICE_COMM_DATA
typedef struct tagDeviceComData
{
	BYTE			bComNo;
	ComConfig		ComConfig;
	BYTE			*pData;
	WORD			wDataLen;
}DeviceComData;


// #define 

#endif