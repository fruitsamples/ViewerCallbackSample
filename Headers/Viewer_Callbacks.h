/*   *	Viewer_Callbacks.h * *	QuickDraw 3D 1.6 Sample *	Robert Dierkes * *	 12/22/98	RDD		Created. */#ifndef _HViewer_Callbacks#define _HViewer_CallbacksTQ3Status Callbacks_InitWindowResizeCallback(	TQ3ViewerObject	viewer,	WindowPtr		window);TQ3Status Callbacks_InitPaneResizeCallback(	TQ3ViewerObject	viewer,	WindowPtr		window,	unsigned long	example);TQ3Status Callbacks_InitDrawingCallback(	TQ3ViewerObject	viewer,	WindowPtr		window);#endif /* _HViewer_Callbacks */