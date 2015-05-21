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
#define DEVICE_ERR_CHNOTEXIST		-9		//ͨ��������
#define DEVICE_ERR_NOTOPENED		-10
#define DEVICE_ERR_UNSUPPORT		-11		//��֧�ֵĹ���
#define DEVICE_ERR_INVALIDFILE		-12		//�ļ���Ч
#define DEVICE_ERR_FILEREAD			-13
#define DEVICE_ERR_UPGRADING		-14		//��������
#define DEVICE_ERR_STREAMNOTOPEN	-15		//������û�д�
#define DEVICE_ERR_NOTPLAYING		-16
#define DEVICE_ERR_FILENOTOPEN		-17
#define DEVICE_ERR_CONNECT			-18
#define DEVICE_ERR_SEND				-19
#define DEVICE_ERR_RECV				-20
#define DEVICE_ERR_RIGHT			-21
#define DEVICE_ERR_DISKNOTEXIST		-22
#define DEVICE_ERR_TALKING			-23	//���ڶԽ�
#define DEVICE_ERR_OPENFILE			-24 //���ļ�ʧ��
#define DEVICE_ERR_TIMEOUT			-25	//������ʱ
#define DEVICE_ERR_FAIL				-30
#define DEVICE_CHANNELFULL			-31
#define DEVICE_DEVICENOEXIST		-32

#define DEVICE_ERR_UNKNOWFILEEXT	-51		//�޷�ʶ����ļ���չ��

#define DEVICE_ERR_NOENOUGHDATA		-61		//����ʱ�������ݲ���

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

#define PLAY_CTRL_GETPOSITION	0		//Զ�̻طŻ�ȡλ�� pdwOutValue:��ȡ����λ��
#define PLAY_CTRL_SETPOSITION	1		//Զ�̻طŶ�λ     dwInValue:���ò���λ��(��)
#define PLAY_CTRL_START			2		//����Զ�̻ط�
#define PLAY_CTRL_STARTAUDIO	3		//������
#define PLAY_CTRL_STOPAUDIO		4		//�ر�����
#define PLAY_CTRL_SETVOLUME		5		//����������dwInValue:���õ�����0-10000
#define PLAY_CTRL_NORMAL		6		//Զ�̻ط���������
#define PLAY_CTRL_PAUSE			7		//��ͣԶ�̻ط�
#define PLAY_CTRL_RESUME		8
#define PLAY_CTRL_SLOW			9		//����,dwInValue:���ŵı���
#define PLAY_CTRL_FAST			10		//��ţ�dwInValue:��ŵı���
#define PLAY_CTRL_FRAME			11		//��֡���ţ�
#define PLAY_CTRL_GETBUFFERPOS	12		//Զ�̻طŻ�ȡ����λ�� pdwOutValue:����λ��(1-100)

#define PROTOCOL_TCP		0
#define PROTOCOL_UDP		1
#define PROTOCOL_MULTICAST	2

#define IMAGE_TYPE_BMP		0x00			//BMP�ļ�
#define IMAGE_TYPE_JPG		0x01			//JPG�ļ�

#define SEARCH_STATUS_NOTSEARCH	1		//û����������
#define SEARCH_STATUS_SEARCHING	2		//��������
#define SEARCH_STATUS_END		3		//���������

#define SEARCHFILE_NOTSEARCH	-1		//û�������ļ�
#define SEARCHFILE_SEARCHING	0		//���������ļ�
#define SEARCHFILE_END			1		//�����ļ������

#define DEVICE_MSG_ALARM		1000		//����
#define DEVICE_MSG_CHBREAK		1001		//ͨ���Ͽ�
#define DEVICE_MSG_LOGINBREAK	1002		//��¼�Ͽ�
#define DEVICE_MSG_COMDATA		1003		//��������
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
											 PBYTE pData,void *pcontext);*///6.13����
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
	DWORD	dwVideoSize;//��Ƶ��С
	DWORD	dwTimeTick;//ʱ���
	WORD	nImgWidth;//��Ƶ���
	WORD	nImgHeight;//��Ƶ�߶�
	DWORD	dwAudioSize;//��Ƶ��С
	WORD	wKeyFrame;//�ؼ�֡i,p,b
	WORD	wReserved;//Ԥ��λ
}AVFrameHeader;

typedef struct tagUPGRADE_PROGRESS
{
	int	nUpStatus;
#define UPGRADE_SENDING 1
#define UPGRADE_UPGRADING 2
#define UPGRADE_END		3
	LPCSTR pCurFile;		//��ǰ�������ļ�
	int	nCurProgress;		//��ǰ�ļ�����
	int	nTotalProgress;	//�ܽ���
	int	nErrorCode;		//������
#define UPGRADE_ERR_OK			0	//����
#define UPGRADE_ERR_OPENFILE	-1	//���ļ�����
#define UPGRADE_ERR_FILECHECK	-2	//�����ļ��Ƿ�
#define UPGRADE_ERR_READ		-3	//��ȡ���ݴ���
#define UPGRADE_ERR_SEND		-4	//�������ݴ���
#define UPGRADE_ERR_RECV		-5	//�������ݴ���
#define UPGRADE_ERR_MEM			-6	//�ڴ����ʧ��
#define UPGRADE_ERR_CRC			-7  //�豸��CRCУ�����
#define UPGRADE_ERR_ABORT		-8	//������ֹ(�������豸������ԭ��)
}UPGRADE_PROGRESS;

typedef struct tagDISK_STATE
{
	int hdCount;			// Ӳ������
	int hdtype[8];			// Ӳ������
	int hdstate[8];			// Ӳ��״̬
	int totalsize[8];		// Ӳ�̿ռ��С
	int freesize[8];		// Ӳ��ʣ��ռ�
}DISK_STATE;

typedef struct tagDeviceInfo
{
	int		nDevType;
	char	sName[32];
	char	sUrl[64];
	WORD	wPort;
	DWORD	nChCount;		//ͨ����
	WORD	wReserve;
}DeviceInfo;

typedef struct tagDataPacket
{
	unsigned char	bIsDataHead;		//�Ƿ���һ֡�еĵ�һ��
	unsigned char	nChannel;			//ͨ����(��Ŵ�0��ʼ)
	unsigned short	nBufSize;			//��Ч���ݴ�С(0-PACK_SIZE)
	unsigned long	nPacketID;			//���ݰ���һ֡�е����
	AVFrameHeader	FrameHeader;		//֡ͷ��Ϣ
	unsigned char	PackData[MAX_PACK_SIZE];//���ݻ���
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

//��ӦDEVICE_MSG_ALARM
typedef struct tagDeviceAlarmInfo
{
	unsigned long	dwAlarmType;//��������
#define ALARM_MOTION_DETECT	1
#define ALARM_IN_ALARM		2
#define ALARM_VIDEO_LOST	3
#define ALARM_VIDEO_COVER	4
	unsigned long	nChannel;//����ͨ��
	SYSTEMTIME		stAlarmTime;//����ʱ��
	unsigned long	nAssociatRec;//
	unsigned long	dwReserve;//Ԥ��
}DeviceAlarmInfo;

typedef struct tagComConfig
{
	DWORD	dwBaudRate;
	BYTE	bDatabit;
	BYTE	bStopbit;
	BYTE	bCheckbit;
	BYTE	bFlowctrl;
}ComConfig;

//��ӦDEVICE_COMM_DATA
typedef struct tagDeviceComData
{
	BYTE			bComNo;
	ComConfig		ComConfig;
	BYTE			*pData;
	WORD			wDataLen;
}DeviceComData;


// #define 

#endif