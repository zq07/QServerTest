#pragma once


// COrgManage 对话框

class COrgManage : public CDialogEx
{
	DECLARE_DYNAMIC(COrgManage)

public:
	COrgManage(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COrgManage();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
