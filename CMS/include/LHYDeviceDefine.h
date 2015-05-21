//�豸Э��ӿ�
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
	NETCMD_NETWORK_DEVSEARCH_REQ = 0x01C1, //�ͻ��������豸��������
	NETCMD_NETWORK_DEVSEARCH_RESP = 0x01C2, //�豸��Ӧ�ͻ�����������
	DEV_BROADCAST_DEVSEARCH_RESP = 0x01C3,	//�豸��Ӧ�ͻ�������
	NETCMD_NETWORK_DEVSEARCH_RETURN = 0x01C4,//��������

	NETCMD_NETWORK_DEVREBOOT_REQ = 0x01D1,	//�ͻ��������豸��������
	NETCMD_NETWORK_DEVREBOOT_RESP =	0x01D2,  //�豸��Ӧ�ÿͻ�����������
	NETCMD_NETWORK_DEVPRARM_REQ	= 0x01D3,  //�ͻ��������豸�޸ĳ�����������
	NETCMD_NETWORK_DEVPRARM_RESP = 0x01D4,  //�豸��Ӧ�ͻ����޸ĳ�����������
	NETCMD_NETWORK_FACTORYRES_REQ =	0x01D5, 	//�ͻ��������豸������������
	NETCMD_NETWORK_FACTORYRES_RESP = 0x01D6,	//�豸��Ӧ�ÿͻ��˳�����������
	DEV_UDPMSG_DEVNTP_REQ = 0X01D7,
	DEV_UDPMSG_DEVNTP_RESP	= 0X01D8,
	NETCMD_NETWORK_DEVREBOOT_FAIL = 0x01E1,	//�豸����ʧ��
	NETCMD_NETWORK_DEVPRARM_FAIL = 0x01E2,	//�޸Ĳ���ʧ��
	NETCMD_NETWORK_FACTORYRES_FAIL = 0x01E3,	//�ָ���������ʧ��
	NETCMD_NETWORK_DEVNTP_FAIL = 0x01E4,	//ʱ��ͬ��ʧ��
	NETCMD_NETWORK_UPDATA_START	= 0x00B0,
	NETCMD_NETWORK_UPDATA_RETURN = 0x00B1,
	NETCMD_NETWORK_UPDATA_MESSAGE = 0x00B3,
	NETCMD_NETWORK_UPDATA_PROGRESS = 0x00B4,

	SUPER_NETWORK_SEARCH_REQ = 0x00D1,//�㲥�����־
	SUPER_NETWORK_SEARCH_RESP = 0x00D2,//�㲥�ظ���־
	
	SUPER_NETWORK_MODCOM_REQ = 0x00E1,//�����޸������־
	SUPER_NETWORK_MODCOM_RESP =	0x00E2,//�����޸Ļظ���־
	SUPER_NETWORK_REST_REQ = 0x00F1,//�豸���������־
	SUPER_NETWORK_REST_RESP = 0x00F2,//�豸�����ظ���־
}MSGTYP;

typedef struct tagNET_MESSAGE
{
	DWORD dwNetFlag;							//Э��ͬ��ͷ 
	DWORD dwCMD;								//Э����Ϣ����
	DWORD dwReserved;					 		//Э��Ԥ��λ
	DWORD dwLength;								//�ṹ�����ݳ���
//	char  lpData[];								//�ṹָ��Ԥ��
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
	/////����	
	CHAR				NetIpAddr[16];				//IP ��ַ
	CHAR				NetGwAddr[16];				//gateway
	CHAR				NetSubMask[16];				//net mask
	CHAR				NetMacAddr[20];				//MAC addr
	CHAR				NetDnsSvI [16];				//DNS1
	CHAR				NetDnsSvII[16];				//DNS2
	UINT				NetWebPort;					////web Port
	UINT				NetServerPort;				////ת���������˿�
	UINT				NetDataPort;				////Data port
}DEVICEINFO,*LPDEVICEINFO;

typedef struct tagDEVEVIFACTORYINFO
{
	/////�豸��Ϣ
	CHAR                strDevName[24];            //��ʾ����
	CHAR				strFactoryName[32];		   //��������
	CHAR       	        strDevSerialNumb[64];      //�������к�
	CHAR                strDevRegcode[26];         //�豸ע����
	CHAR				strDevVer[16];			  //�豸CPU ����
	CHAR				strHardVer[64];			  //Ӳ���汾��
	CHAR				strSoftVer[64];			  //����汾��
}FACTORYINFO,*LPFACTORYINFO;	

typedef struct _DEVSEARCHINFO_
{
	DEVICEINFO 	DevInfo;
	FACTORYINFO	FactoryInfo;
}DEVSEARCHINFO, *LPDEVSEARCHINFO;

/***********������ʶͷ"tmup"**************/
#define UPDATA_D_FLAG  0x746d7570

//������ͷ160���ֽ�
typedef struct tagTMUPDATAFILE_HEADER
{
	DWORD	dwFlag;			//1.������ʶͷ"tmup",
	DWORD	dwDataCRC;		//2.CRCͷ�ļ�Ч��
	DWORD   dwCPUType;	    //3.������CPU���ͣ���˼HI3515\HI3520\HI3530\HI3531
	DWORD	dwImageType;    //4.Image���ͣ������ںˡ�����rootfs�ļ�ϵͳ
	DWORD	dwChCount;	    //5.��������Ƶͨ������	
	DWORD	dwServerType;   //6.����������
	DWORD	dwMainVer;		//7.�����ļ����汾��,1-8
	DWORD	dwChildVer;		//8.�����ļ��Ӱ汾��,1-10
	DWORD	dwModityVer;	//9.�����ļ��޸ı�ʶ�汾��,��д�ֶ���д��1-99
	DWORD	dwRawWriteFileLen;   //10.����д���ļ�����
	char	ReserveBuf[120];  //��Ϊ����������Ϣ��Ԥ���ֽڣ�Ϊ�˷�����չ
	
}TMUPDATAFILE_HEADER,*PTMUPDATAFILE_HEADER;

/***********����������**************/
#define UPDATA_D_FLUSH_ALL_WINDOWS  0x1999


typedef enum _file_upgrade_datacheck_enum
{
	/***�����ļ���ͷЧ�����***/
	FILE_UPGRADE_DATACHECK_OK=0	,			//������ȷ
		FILE_UPGRADE_DATACHECK_BUFFER_ERR,		//bufferΪNULL����
		FILE_UPGRADE_DATACHECK_FLAG_ERR,		//FLAG����
		FILE_UPGRADE_DATACHECK_IMAGE_TYPE_ERR,	//�������ʹ���
		FILE_UPGRADE_DATACHECK_CPU_TYPE_ERR ,	//CPU���ʹ���
		FILE_UPGRADE_DATACHECK_VIDEOCOUNT_ERR ,	//��Ƶͨ������
		FILE_UPGRADE_DATACHECK_VERSION_ERR ,	//�汾����
		FILE_UPGRADE_DATACHECK_DATALEN_ERR ,	//����ʵ�ʳ��ȴ���
		FILE_UPGRADE_DATACHECK_CRC_ERR ,		//CRC����Ч�����
		/***�����ļ���д״̬���***/		
		FILE_UPGRADE_OPEN_FAILURE ,				//���ļ�ʧ��
		FILE_UPGRADE_COUNTLENGHT_FAILURE ,		//���ļ��ܳ���С��������ͷ160���ֽ�
		FILE_UPGRADE_MALLOC_MEMERY_FAILURE ,	//����ϵͳ�ڴ�ʧ��
		FILE_UPGRADE_USBDISK_DONTFIND ,			//��U����δ�ҵ������ļ�
		/***��дFlash״̬���***/	
		FLASH_UPGRADE_OK	,				//FLASHд������,�����ɹ�
		FLASH_UPGRADE_OPEN_DEVICE_FAIL,		//��FLASH�豸ʧ��
		FLASH_UPGRADE_WRITE_DATA_FAIL,		//д�����ݵ�FLASH�豸ʧ��
		FLASH_UPGRADE_READ_DATA_FAIL,		//��ȡ���ݵ�FLASH�豸ʧ��
		FLASH_UPGRADE_DATA_SIZE_ERR	,		//����д�����ݴ�С����
		/***��������״̬���***/
		NETWORK_STATUS_CHECK_OK ,					//��������״̬����
		NETWORK_STATUS_CHECK_BLOCKE_ERROR ,			//�����������ְ�����
		NETWORK_STATUS_CHECK_MALLOC_MEMERY_FAILURE , //������������ϵͳ�ڴ�ʧ��
		NETWORK_STATUS_RECV_ERROR                  //�����������ݽ����쳣
		
		
} FILE_UPGRADE_DATACHECK_E;
typedef struct tagSUPERSEARCH_INFO
{
	char 	strNetIpaddr[16];
	char 	strNetGatway[16];
	char 	strNetMacAddr[24];
	char	strDevSerial[24];
	char	strDevSofVar[24];
	char	strDevHarVar[24];
}SUPERSEARCHINFO,*LPSUPERSEARCHINFO;//���ݽṹ��

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