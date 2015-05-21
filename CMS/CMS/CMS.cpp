
// CMS.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "CMS.h"
#include "CMSDlg.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#if 0
TCHAR g_sLogFilePath[MAX_PATH];
TCHAR g_sSkinPath[MAX_PATH] = { 0 };
TCHAR g_szSettingPath[MAX_PATH] = { 0 };	//�������õ��ļ�·��
DWORD g_nLanguageID = -1, g_nLanguage = -1;
CMemIniFile *g_LanguageIni = NULL;
CMemIniFile *g_SkinIni = NULL;
int g_nDisk = 0;


void CCMSApp::LoadLanguage()
{
	g_nLanguageID = g_nLanguage;
	LoadLanguageIni(g_nLanguageID, g_LanguageIni);
	SaveLanguage();
}

void CCMSApp::SaveSkinPath()
{
	CString strExeName;
	GetModuleFileName(NULL, strExeName.GetBuffer(490), 490);
	strExeName.ReleaseBuffer();
	int nPos = strExeName.ReverseFind('\\');
	strExeName = strExeName.Left(nPos + 1);
	CString sSkinPath = g_sSkinPath;
	sSkinPath = sSkinPath.Right(sSkinPath.GetLength() - strExeName.GetLength());
	WritePrivateProfileString(_T("GENERAL"), _T("SkinPath"), sSkinPath, g_szSettingPath);
}

void CCMSApp::SaveLanguage()
{
	CString strExeName;
	strExeName.Format(_T("0x%X"), g_nLanguageID);
	WritePrivateProfileString(_T("GENERAL"), _T("Language"), strExeName, g_szSettingPath);
}

void CCMSApp::LoadSkin()
{
	SKIN_INFO *pCurSkin = NULL;
	for (int i = 0; i < m_nSkinCount; i++)
	{
		TCHAR sPath[MAX_PATH] = { 0 };
		StringToUnicode(m_pSkinInfo[i].sPath, sPath, MAX_PATH, 0);
		if (0 == _tcscmp(g_sSkinPath, sPath))
		{
			pCurSkin = &m_pSkinInfo[i];
			break;
		}
	}
	if (NULL == pCurSkin)
	{
		if (m_nSkinCount > 0)
			pCurSkin = &m_pSkinInfo[0];
		else
			return;
	}
	g_LoadSkin(pCurSkin, g_SkinIni);
	SaveSkinPath();
}
#endif



// CCMSApp

BEGIN_MESSAGE_MAP(CCMSApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CCMSApp ����

CCMSApp::CCMSApp()
{
	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO:  �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CCMSApp ����

CCMSApp theApp;


// CCMSApp ��ʼ��

BOOL CCMSApp::InitInstance()
{
	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()��  ���򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	skinppLoadSkin("Skins\\Aten.ssk"); //����Ƥ��
	AfxEnableControlContainer();

	// ���� shell ���������Է��Ի������
	// �κ� shell ����ͼ�ؼ��� shell �б���ͼ�ؼ���
	CShellManager *pShellManager = new CShellManager;

	// ���Windows Native���Ӿ����������Ա��� MFC �ؼ�����������
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO:  Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("Ӧ�ó��������ɵı���Ӧ�ó���"));

	CCMSDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȷ�������رնԻ���Ĵ���
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO:  �ڴ˷��ô����ʱ��
		//  ��ȡ�������رնԻ���Ĵ���
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "����: �Ի��򴴽�ʧ�ܣ�Ӧ�ó���������ֹ��\n");
		TRACE(traceAppMsg, 0, "����: ������ڶԻ�����ʹ�� MFC �ؼ������޷� #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS��\n");
	}

	// ɾ�����洴���� shell ��������
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

	// ���ڶԻ����ѹرգ����Խ����� FALSE �Ա��˳�Ӧ�ó���
	//  ����������Ӧ�ó������Ϣ�á�
	return FALSE;
}


