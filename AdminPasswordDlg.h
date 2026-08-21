#pragma once

#include "Resource.h"

class AdminPasswordDlg : public CDialog
{
public:
    AdminPasswordDlg(CWnd* pParent = nullptr)
        : CDialog(IDD_ADMIN_PASSWORD, pParent)
    {
    }

    CString password;

protected:
    virtual void DoDataExchange(CDataExchange* pDX)
    {
        CDialog::DoDataExchange(pDX);
        DDX_Text(pDX, IDC_ADMIN_PASSWORD, password);
    }
};