/* 
 * Motif
 *
 * Copyright (c) 1987-2012, The Open Group. All rights reserved.
 *
 * These libraries and programs are free software; you can
 * redistribute them and/or modify them under the terms of the GNU
 * Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * These libraries and programs are distributed in the hope that
 * they will be useful, but WITHOUT ANY WARRANTY; without even the
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with these librararies and programs; if not, write
 * to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301 USA
*/ 
#ifndef _XmRepTypeI_h
#define _XmRepTypeI_h

#include <Xm/RepType.h>
#include "XmI.h"

#ifdef __cplusplus
extern "C" {
#endif

/* We need a name to refer to the original unit type converter. 
   This name is used as a to_type when installing a duplicate of the 
   unit type converter in RepType.c and it is used again as a to_type 
   when calling XtConvertAndStore in ResConvert.c when implementing 
   XmCvtStringToUnitType (call to the original converter) */
#define REAL_UNIT_TYPE_NAME "RealUnitType"

/*  The following enumerations of representation type identification
 *   numbers have a one-to-one positional mapping to the corresponding
 *   representation type record in the static rep type lists.
 *   The two static lists are in alphabetical order, as required by 
 *   the coding of the XmRepTypeGetId routine. ('_' is the exception in
 *   this enum, the XmR names gives the order, really)
 */

enum {
	XmRID_ALIGNMENT,	                
	XmRID_ANIMATION_STYLE,
	XmRID_ARROW_DIRECTION,			
	XmRID_ARROW_LAYOUT,
	XmRID_ARROW_ORIENTATION,
	XmRID_ARROW_SENSITIVITY,
	XmRID_ATTACHMENT,
	XmRID_AUDIBLE_WARNING,			
	XmRID_AUTO_DRAG_MODEL,
	XmRID_AUTOMATIC_SELECTION,
	XmRID_BINDING_TYPE,			
	XmRID_BITMAP_CONVERSION_MODEL,
	XmRID_BLEND_MODEL,
	XmRID_CHILD_HORIZONTAL_ALIGNMENT,	
	XmRID_CHILD_PLACEMENT,
	XmRID_CHILD_TYPE,			
	XmRID_CHILD_VERTICAL_ALIGNMENT,
	XmRID_COMBO_BOX_LIST_ACTION_ACTION_PARAMS,
	XmRID_COMBO_BOX_TYPE,			
	XmRID_COMMAND_SELECTION_BOX_UP_OR_DOWN_ACTION_PARAMS,
	XmRID_COMMAND_WINDOW_LOCATION,
	XmRID_CONTAINER_CURSOR_ACTION_PARAMS,
	XmRID_CONTAINER_EXPAND_OR_COLLAPSE_ACTION_PARAMS,
	XmRID_CONTAINER_START_TRANSFER_ACTION_PARAMS,
	XmRID_DEFAULT_BUTTON_EMPHASIS,
	XmRID_DEFAULT_BUTTON_TYPE,
	XmRID_DELETE_RESPONSE,
	XmRID_DIALOG_STYLE,
	XmRID_DIALOG_TYPE,
	XmRID_DIRECTION,			
	XmRID_DRAG_INITIATOR_PROTOCOL_STYLE,
	XmRID_DRAG_RECEIVER_PROTOCOL_STYLE,
	XmRID_DROP_SITE_ACTIVITY,		
	XmRID_DROP_SITE_TYPE,
	XmRID_EDIT_MODE,
	XmRID_ENABLE_BTN1_TRANSFER,
	XmRID_ENABLE_WARP,			
	XmRID_ENTRY_VIEW_TYPE,
	XmRID_FILE_FILTER_STYLE,
	XmRID_FILE_SELECTION_BOX_UP_OR_DOWN_ACTION_PARAMS,
	XmRID_FILE_TYPE_MASK,
	XmRID_FONT_TYPE,
	XmRID_ICON_ATTACHMENT,
	XmRID_INDICATOR_ON,
	XmRID_INDICATOR_TYPE,
	XmRID_INPUT_POLICY,
	XmRID_KEYBOARD_FOCUS_POLICY,
	XmRID_LABEL_TYPE,
	XmRID_LAYOUT_TYPE,                      
	XmRID_LINE_STYLE,
	XmRID_LINE_TYPE,			
	XmRID_LIST_SIZE_POLICY,			
	XmRID_LOAD_MODEL,
	XmRID_MATCH_BEHAVIOR,
	XmRID_MULTI_CLICK,
	XmRID_NAVIGATION_TYPE,			
	XmRID_NB_CHILD_TYPE,
	XmRID_NOTEBOOK_TRAVERSE_TAB_ACTION_PARAMS,
	XmRID_ORIENTATION,
	XmRID_OUTLINE_BUTTON_POLICY,		
	XmRID_OUTLINE_STATE,
	XmRID_PACKING,				
	XmRID_PANED_WINDOW_SASH_ACTION_PARAMS,
	XmRID_PANED_WINDOW_SASH_DIRECTION_ACTION_PARAMS,
	XmRID_PANED_WINDOW_SASH_INCREMENT_ACTION_PARAMS,
	XmRID_PATH_MODE,
	XmRID_POSITION_MODE,
	XmRID_POSITION_TYPE,
	XmRID_PRIMARY_OWNERSHIP,
	XmRID_PROCESSING_DIRECTION,
	XmRID_RESIZE_POLICY,			
	XmRID_ROW_COLUMN_TYPE,
	XmRID_SCROLL_BAR_DISPLAY_POLICY,
	XmRID_SCROLL_BAR_INCREMENT_DOWN_OR_RIGHT_ACTION_PARAMS,
	XmRID_SCROLL_BAR_INCREMENT_UP_OR_LEFT_ACTION_PARAMS,
	XmRID_SCROLL_BAR_PAGE_DOWN_OR_RIGHT_ACTION_PARAMS,
	XmRID_SCROLL_BAR_PAGE_UP_OR_LEFT_ACTION_PARAMS,
	XmRID_SCROLL_BAR_PLACEMENT,
	XmRID_SCROLLED_WINDOW_CHILD_TYPE,
	XmRID_SCROLLING_POLICY,
	XmRID_SELECTION_BOX_UP_OR_DOWN_ACTION_PARAMS,
	XmRID_SELECTION_MODE,
	XmRID_SELECTION_POLICY,			
	XmRID_SELECTION_TECHNIQUE,
	XmRID_SELECTION_TYPE,			
	XmRID_SEPARATOR_TYPE,
	XmRID_SET,
	XmRID_SHADOW_TYPE,
	XmRID_SHOW_ARROWS,
	XmRID_SHOW_VALUE,
	XmRID_SLIDER_MARK,                    
	XmRID_SLIDER_VISUAL,                    
	XmRID_SLIDING_MODE,
	XmRID_SPATIAL_INCLUDE_MODEL,		
	XmRID_SPATIAL_RESIZE_MODEL,
	XmRID_SPATIAL_SNAP_MODEL,		
	XmRID_SPATIAL_STYLE,
	XmRID_SPINBOX_CHILD_TYPE,
	XmRID_STRING_DIRECTION,
	XmRID_TEAR_OFF_MODEL,
	XmRID_TEXT_EXTEND_MOVEMENT_ACTION_PARAMS,
	XmRID_TEXTFIELD_DIRECTION_ACTION_PARAMS,
	XmRID_TEXTFIELD_EXTEND_MOVEMENT_ACTION_PARAMS,
	XmRID_TEXT_HORIZONTAL_DIRECTION_ACTION_PARAMS,
	XmRID_TEXT_VERTICAL_DIRECTION_ACTION_PARAMS,
	XmRID_TOGGLE_MODE,
	XmRID_UNIT_TYPE,			
	XmRID_UNPOST_BEHAVIOR,
	XmRID_VERTICAL_ALIGNMENT,		
	XmRID_VIEW_TYPE,
	XmRID_VISUAL_EMPHASIS,			
	XmRID_VISUAL_POLICY,
	XmRID_WHICH_BUTTON,
	XmRID_PIXMAP_PLACEMENT
	} ;


/********    Private Function Declarations    ********/

extern void _XmRepTypeInstallConverters( void ) ;
extern Boolean _XmConvertActionParamToRepTypeId(Widget widget,
						XmRepTypeId rep_type_id,
						char *parameter,
						Boolean can_be_numeric,
						int *result) ;

/********    End Private Function Declarations    ********/



#ifdef __cplusplus
}  /* Close scope of 'extern "C"' declaration which encloses file. */
#endif

#endif /* _XmRepTypeI_h */
/* DON'T ADD ANYTHING AFTER THIS #endif */
