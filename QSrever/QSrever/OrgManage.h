#pragma once


// COrgManage �Ի���

class COrgManage : public CDialogEx
{
	DECLARE_DYNAMIC(COrgManage)

public:
	COrgManage(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COrgManage();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
