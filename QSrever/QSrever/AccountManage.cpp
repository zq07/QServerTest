// AccountManage.cpp : 实现文件
//

#include "stdafx.h"
#include "QSrever.h"
#include "AccountManage.h"
#include "afxdialogex.h"


// CAccountManage 对话框

IMPLEMENT_DYNAMIC(CAccountManage, CDialogEx)

CAccountManage::CAccountManage(CWnd* pParent /*=NULL*/)
	: CDialogEx(CAccountManage::IDD, pParent)
{

}

CAccountManage::~CAccountManage()
{
}

void CAccountManage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CAccountManage, CDialogEx)
END_MESSAGE_MAP()


// CAccountManage 消息处理程序
