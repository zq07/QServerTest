#pragma once


// CAccountManage �Ի���

class CAccountManage : public CDialogEx
{
	DECLARE_DYNAMIC(CAccountManage)

public:
	CAccountManage(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CAccountManage();

// �Ի�������
	enum { IDD = IDD_DIALOG1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
