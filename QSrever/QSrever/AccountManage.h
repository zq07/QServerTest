#pragma once


// CAccountManage 对话框

class CAccountManage : public CDialogEx
{
	DECLARE_DYNAMIC(CAccountManage)

public:
	CAccountManage(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CAccountManage();

// 对话框数据
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
