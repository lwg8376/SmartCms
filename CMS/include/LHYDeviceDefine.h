//设备协议接口
#ifndef CAMERA_DEVDEFINE_H
#define CAMERA_DEVDEFINE_H

#define  DEVICE_ERR_SEARSUCCESS		 0
#define  DEVICE_ERR_INVALIDPARAM	-1
//#define  DEVICE_ERR_ALLOCMEMORY		-2
//#define  DEVICE_ERR_INVALIDHANDLE	-3
#define  MULTICASESEND_PORT   		 60007
#define  MULTICASERECV_PORT   		 60006
#define	 NETDATA_FLAG				 0x64766d74
#define  MULTICASE_ADDR				"230.1.1.1"
#define  MAX_SN_LEN					32
#define  MAX_MAC_ADDR_LEN			20
#define  MAX_DEV_NUM				128
#define	 BLOCK_NETWORK_UPDATA_BLOCKSIZE	1024 
#include <TIME.H>
typedef enum MsgType
{
	NETCMD_NETWORK_DEVSEARCH_REQ = 0x01C1, //客户端请求设备搜索命令
	NETCMD_NETWORK_DEVSEARCH_RESP = 0x01C2, //设备回应客户端搜索命令
	DEV_BROADCAST_DEVSEARCH_RESP = 0x01C3,	//设备回应客户端命令
	NETCMD_NETWORK_DEVSEARCH_RETURN = 0x01C4,//搜索结束

	NETCMD_NETWORK_DEVREBOOT_REQ = 0x01D1,	//客户端请求设备重启命令
	NETCMD_NETWORK_DEVREBOOT_RESP =	0x01D2,  //设备回应该客户端重启命令
	NETCMD_NETWORK_DEVPRARM_REQ	= 0x01D3,  //客户端请求设备修改出厂参数设置
	NETCMD_NETWORK_DEVPRARM_RESP = 0x01D4,  //设备回应客户端修改出厂参数设置
	NETCMD_NETWORK_FACTORYRES_REQ =	0x01D5, 	//客户端请求设备出厂设置命令
	NETCMD_NETWORK_FACTORYRES_RESP = 0x01D6,	//设备回应该客户端出厂设置命令
	DEV_UDPMSG_DEVNTP_REQ = 0X01D7,
	DEV_UDPMSG_DEVNTP_RESP	= 0X01D8,
	NETCMD_NETWORK_DEVREBOOT_FAIL = 0x01E1,	//设备重启失败
	NETCMD_NETWORK_DEVPRARM_FAIL = 0x01E2,	//修改参数失败
	NETCMD_NETWORK_FACTORYRES_FAIL = 0x01E3,	//恢复出厂设置失败
	NETCMD_NETWORK_DEVNTP_FAIL = 0x01E4,	//时间同步失败
	NETCMD_NETWORK_UPDATA_START	= 0x00B0,
	NETCMD_NETWORK_UPDATA_RETURN = 0x00B1,
	NETCMD_NETWORK_UPDATA_MESSAGE = 0x00B3,
	NETCMD_NETWORK_UPDATA_PROGRESS = 0x00B4,

	SUPER_NETWORK_SEARCH_REQ = 0x00D1,//广播请求标志
	SUPER_NETWORK_SEARCH_RESP = 0x00D2,//广播回复标志
	
	SUPER_NETWORK_MODCOM_REQ = 0x00E1,//参数修改请求标志
	SUPER_NETWORK_MODCOM_RESP =	0x00E2,//参数修改回复标志
	SUPER_NETWORK_REST_REQ = 0x00F1,//设备重启请求标志
	SUPER_NETWORK_REST_RESP = 0x00F2,//设备重启回复标志
}MSGTYP;

typedef struct tagNET_MESSAGE
{
	DWORD dwNetFlag;							//协议同步头 
	DWORD dwCMD;								//协议消息命令
	DWORD dwReserved;					 		//协议预留位
	DWORD dwLength;								//结构体数据长度
//	char  lpData[];								//结构指针预留
}NET_MESSAGE,*LPNET_MESSAGE;

typedef struct tagDEVTIME
{
	NET_MESSAGE	HeadMsg;
	struct tm dwTime;							
}DEVTIME,*LPDEVTIME;

typedef struct UpgradInfo
{
	char pIpaddress[20];
	int nItem;
}UPGRADE_INFO;

typedef struct tagDEVICEINFOMATION
{
	/////网络	
	CHAR				NetIpAddr[16];				//IP 地址
	CHAR				NetGwAddr[16];				//gateway
	CHAR				NetSubMask[16];				//net mask
	CHAR				NetMacAddr[20];				//MAC addr
	CHAR				NetDnsSvI [16];				//DNS1
	CHAR				NetDnsSvII[16];				//DNS2
	UINT				NetWebPort;					////web Port
	UINT				NetServerPort;				////转发服务器端口
	UINT				NetDataPort;				////Data port
}DEVICEINFO,*LPDEVICEINFO;

typedef struct tagDEVEVIFACTORYINFO
{
	/////设备信息
	CHAR                strDevName[24];            //显示名称
	CHAR				strFactoryName[32];		   //厂家名称
	CHAR       	        strDevSerialNumb[64];      //出厂序列号
	CHAR                strDevRegcode[26];         //设备注册码
	CHAR				strDevVer[16];			  //设备CPU 类型
	CHAR				strHardVer[64];			  //硬件版本号
	CHAR				strSoftVer[64];			  //软件版本号
}FACTORYINFO,*LPFACTORYINFO;	

typedef struct _DEVSEARCHINFO_
{
	DEVICEINFO 	DevInfo;
	FACTORYINFO	FactoryInfo;
}DEVSEARCHINFO, *LPDEVSEARCHINFO;

/***********升级标识头"tmup"**************/
#define UPDATA_D_FLAG  0x746d7570

//升级包头160个字节
typedef struct tagTMUPDATAFILE_HEADER
{
	DWORD	dwFlag;			//1.升级标识头"tmup",
	DWORD	dwDataCRC;		//2.CRC头文件效验
	DWORD   dwCPUType;	    //3.服务器CPU类型，海思HI3515\HI3520\HI3530\HI3531
	DWORD	dwImageType;    //4.Image类型，升级内核、或者rootfs文件系统
	DWORD	dwChCount;	    //5.服务器视频通道数量	
	DWORD	dwServerType;   //6.服务器类型
	DWORD	dwMainVer;		//7.升级文件主版本号,1-8
	DWORD	dwChildVer;		//8.升级文件子版本号,1-10
	DWORD	dwModityVer;	//9.升级文件修改标识版本号,填写手动填写，1-99
	DWORD	dwRawWriteFileLen;   //10.升级写入文件长度
	char	ReserveBuf[120];  //作为附加中文信息，预留字节，为了方便扩展
	
}TMUPDATAFILE_HEADER,*PTMUPDATAFILE_HEADER;

/***********服务器类型**************/
#define UPDATA_D_FLUSH_ALL_WINDOWS  0x1999


typedef enum _file_upgrade_datacheck_enum
{
	/***升级文件包头效验情况***/
	FILE_UPGRADE_DATACHECK_OK=0	,			//数据正确
		FILE_UPGRADE_DATACHECK_BUFFER_ERR,		//buffer为NULL错误
		FILE_UPGRADE_DATACHECK_FLAG_ERR,		//FLAG错误
		FILE_UPGRADE_DATACHECK_IMAGE_TYPE_ERR,	//升级类型错误
		FILE_UPGRADE_DATACHECK_CPU_TYPE_ERR ,	//CPU类型错误
		FILE_UPGRADE_DATACHECK_VIDEOCOUNT_ERR ,	//视频通道错误
		FILE_UPGRADE_DATACHECK_VERSION_ERR ,	//版本错误
		FILE_UPGRADE_DATACHECK_DATALEN_ERR ,	//数据实际长度错误
		FILE_UPGRADE_DATACHECK_CRC_ERR ,		//CRC数据效验错误
		/***升级文件读写状态情况***/		
		FILE_UPGRADE_OPEN_FAILURE ,				//打开文件失败
		FILE_UPGRADE_COUNTLENGHT_FAILURE ,		//打开文件总长度小于升级包头160个字节
		FILE_UPGRADE_MALLOC_MEMERY_FAILURE ,	//申请系统内存失败
		FILE_UPGRADE_USBDISK_DONTFIND ,			//在U盘中未找到升级文件
		/***读写Flash状态情况***/	
		FLASH_UPGRADE_OK	,				//FLASH写入正常,升级成功
		FLASH_UPGRADE_OPEN_DEVICE_FAIL,		//打开FLASH设备失败
		FLASH_UPGRADE_WRITE_DATA_FAIL,		//写入数据到FLASH设备失败
		FLASH_UPGRADE_READ_DATA_FAIL,		//读取数据到FLASH设备失败
		FLASH_UPGRADE_DATA_SIZE_ERR	,		//发现写入数据大小错误
		/***网络升级状态情况***/
		NETWORK_STATUS_CHECK_OK ,					//网络升级状态正常
		NETWORK_STATUS_CHECK_BLOCKE_ERROR ,			//网络升级检查分包错误
		NETWORK_STATUS_CHECK_MALLOC_MEMERY_FAILURE , //网络升级申请系统内存失败
		NETWORK_STATUS_RECV_ERROR                  //网络升级数据接收异常
		
		
} FILE_UPGRADE_DATACHECK_E;
typedef struct tagSUPERSEARCH_INFO
{
	char 	strNetIpaddr[16];
	char 	strNetGatway[16];
	char 	strNetMacAddr[24];
	char	strDevSerial[24];
	char	strDevSofVar[24];
	char	strDevHarVar[24];
}SUPERSEARCHINFO,*LPSUPERSEARCHINFO;//数据结构体

typedef struct tagGROUP_NODEEX
{
	DEVSEARCHINFO  DeviceInfo;
	int nProcess;
	int nID;
}GROUP_NODE_EX,*LPGROUP_NODE_EX;

typedef void  (__stdcall *SearchCamDevCallBack)(MSGTYP MsgType,LPVOID pData,LPVOID pContext);
// typedef void  ( __stdcall DevSearchCallBack)(int nDevType,LPCSTR sDevName,LPCSTR sUrl,BYTE MacAddr[6],
// 												WORD wWebPort,WORD wDataPort,LPCSTR sNetmask,LPCSTR sGateWay,LPCSTR sDNS,LPCSTR sMultiIp,WORD wMultiPort,int nChCount,void *pcontext,DEVSEARCHINFO* pDeviceInfo)

typedef void  (_stdcall *CallBackDeviceInfo)(int nprocess, int nItem,LPVOID pContext);


#endif