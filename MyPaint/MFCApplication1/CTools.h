#pragma once
#include <afxext.h>
class CTools :
	public CToolBar
{
public:
	CTools();
	virtual ~CTools();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

