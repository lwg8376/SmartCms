
// CMS.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������

// CCMSApp: 
// �йش����ʵ�֣������ CMS.cpp
//
#if 0
class CCMSApp : public CWinApp
{
public:
	CCMSApp();

	void LoadLanguage();
	void SaveLanguage();
	void LoadSkin();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()

private:
	void SaveSkinPath();

	LANGUAGE_INFO	*m_pLanguageInfo;
	int				m_nlanguageCount;
	SKIN_INFO		*m_pSkinInfo;
	int				m_nSkinCount;
	HANDLE			m_hInstanceMutex;
};
#else

class CCMSApp : public CWinApp
{
public:
	CCMSApp();
	// ��д
public:
	virtual BOOL InitInstance();

	// ʵ��

	DECLARE_MESSAGE_MAP()


};

#endif

extern CCMSApp theApp;