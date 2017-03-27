//========= Copyright � 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================

#ifndef TOOLMAGNIFY_H
#define TOOLMAGNIFY_H
#ifdef _WIN32
#pragma once
#endif

#include "ToolInterface.h"


class CToolMagnify : public CBaseTool
{
public:

	CToolMagnify(void);
	~CToolMagnify(void) {}

	//
	// CBaseTool implementation.
	//
	virtual ToolID_t GetToolID(void) { return TOOL_MAGNIFY; }

	virtual bool OnContextMenu2D(CMapView2D *pView, CPoint point);
	virtual bool OnLMouseDown2D(CMapView2D *pView, UINT nFlags, CPoint point);
	virtual bool OnRMouseDown2D(CMapView2D *pView, UINT nFlags, CPoint point);
	virtual bool OnMouseMove2D(CMapView2D *pView, UINT nFlags, CPoint point);
};

#endif // TOOLMAGNIFY_H