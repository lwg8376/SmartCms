
// CMS.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号

// CCMSApp: 
// 有关此类的实现，请参阅 CMS.cpp
//
#if 0
class CCMSApp : public CWinApp
{
public:
	CCMSApp();

	void LoadLanguage();
	void SaveLanguage();
	void LoadSkin();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

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
	// 重写
public:
	virtual BOOL InitInstance();

	// 实现

	DECLARE_MESSAGE_MAP()


};

#endif

extern CCMSApp theApp;