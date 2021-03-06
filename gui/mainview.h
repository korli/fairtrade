/*
 * Copyright 2006-2013, Clemens Zeidler, czeidler@gmx.de
 * Distributed under the terms of the MIT License.              
 */

#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <ListView.h>
#include <ListItem.h>

const int MAIN_MENU_MSG = '&MMM';
const int UPDATE_PRODUCT = '&upr';

// main menu item ids:
enum {
	MAIN_MENU_PRODUCTS = 1,
	MAIN_MENU_SELL,
	MAIN_MENU_INVENTUR,
	MAIN_MENU_EXIT
};

class MainListItem : public BStringItem
{
	public: 
					MainListItem(int8 menuitem, const char *text);
		int8 fMenuItem;
};


class MainListView : public BListView
{
	public:
					MainListView(BRect frame, const char *name)
								:BListView(frame,name){}
		virtual void KeyDown(const char *bytes, int32 numBytes);
};


class MainView  : public BView 
{
	public:
						 MainView(BRect bounds);
						
			virtual void FrameResized(float width, float height);
			virtual void MakeFocus(bool focused);
			
	private:
		BListView *fMainMenuListView;
		
};



#endif
