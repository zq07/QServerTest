// OrgManage.cpp : 实现文件
//

#include "stdafx.h"
#include "QSrever.h"
#include "OrgManage.h"
#include "afxdialogex.h"


// COrgManage 对话框

IMPLEMENT_DYNAMIC(COrgManage, CDialogEx)

COrgManage::COrgManage(CWnd* pParent /*=NULL*/)
	: CDialogEx(COrgManage::IDD, pParent)
{

}

COrgManage::~COrgManage()
{
}

void COrgManage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COrgManage, CDialogEx)
END_MESSAGE_MAP()


// COrgManage 消息处理程序
