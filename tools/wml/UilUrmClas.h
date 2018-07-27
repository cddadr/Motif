/*
**	This file is automatically generated.  Do not edit it by hand.
**/

/*  Define mapping of UIL widget types to convenience functions.  */
static char *uil_widget_funcs_vec[] = {
  "",	  /* NOT USED */
  "DtCreateEditor",	
  "DtCreateHelpDialog",	
  "DtCreateHelpQuickDialog",	
  "DtCreateMenuButton",	
  "DtCreatePrintSetupBox",	
  "DtCreatePrintSetupDialog",	
  "DtCreateTerm",	
  "DtCreateTermPrimitive",	
  "XmCreateArrowButton",	
  "XmCreateArrowButtonGadget",	
  "XmCreateBulletinBoard",	
  "XmCreateBulletinBoardDialog",	
  "XmCreateButtonBox",	
  "XmCreateCascadeButton",	
  "XmCreateCascadeButtonGadget",	
  "XmCreateSimpleCheckBox",	
  "XmCreateColorSelector",	
  "XmCreateColumn",	
  "XmCreateComboBox",	
  "XmCreateCommand",	
  "XmCreateCommandDialog",	
  "XmCreateContainer",	
  "XmCreateDataField",	
  "XmCreateDialogShell",	
  "XmCreateDrawingArea",	
  "XmCreateDrawnButton",	
  "XmCreateDropDown",	
  "XmCreateErrorDialog",	
  "XmCreateFileSelectionBox",	
  "XmCreateFileSelectionDialog",	
  "XmCreateFontSelector",	
  "XmCreateForm",	
  "XmCreateFormDialog",	
  "XmCreateFrame",	
  "XmCreateIconBox",	
  "XmCreateIconButton",	
  "XmCreateIconGadget",	
  "XmCreateInformationDialog",	
  "XmCreateLabel",	
  "XmCreateLabelGadget",	
  "XmCreateList",	
  "XmCreateMainWindow",	
  "XmCreateMenuBar",	
  "XmCreateMenuShell",	
  "XmCreateMessageBox",	
  "XmCreateMessageDialog",	
  "XmCreateMultiList",	
  "XmCreateNotebook",	
  "XmCreateOptionMenu",	
  "XmCreateOutline",	
  "XmCreatePaned",	
  "XmCreatePanedWindow",	
  "XmCreatePopupMenu",	
  "XmCreatePromptDialog",	
  "XmCreatePulldownMenu",	
  "XmCreatePushButton",	
  "XmCreatePushButtonGadget",	
  "XmCreateQuestionDialog",	
  "XmCreateRadioBox",	
  "_XmCreateRenderTable",	
  "_XmCreateRendition",	
  "XmCreateRowColumn",	
  "XmCreateScale",	
  "XmCreateScrollBar",	
  "XmCreateScrolledList",	
  "XmCreateScrolledText",	
  "XmCreateScrolledWindow",	
  "XmCreateSelectionBox",	
  "XmCreateSelectionDialog",	
  "XmCreateSeparator",	
  "XmCreateSeparatorGadget",	
  "XmCreateSimpleSpinBox",	
  "XmCreateSpinBox",	
  "_XmCreateTab",	
  "XmCreateTabBox",	
  "_XmCreateTabList",	
  "XmCreateTabStack",	
  "",	
  "XmCreateTemplateDialog",	
  "XmCreateText",	
  "XmCreateTextField",	
  "XmCreateToggleButton",	
  "XmCreateToggleButtonGadget",	
  "XmCreateTree",	
  "XmCreateWarningDialog",	
  "XmCreateWorkArea",	
  "XmCreateWorkingDialog",	
  "user_defined",	
};
externaldef(uil_sym_glbl) char **uil_widget_funcs = uil_widget_funcs_vec;

/*  Define mapping of UIL widget classes to matching gadget class.  */
static unsigned short int uil_gadget_variants_vec[] = {
  0,	  /* NOT USED */
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmArrowButtonGadget_object,
  0,
  0,
  0,
  0,
  sym_k_XmCascadeButtonGadget_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmLabelGadget_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmPushButtonGadget_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmSeparatorGadget_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmToggleButtonGadget_object,
  0,
  0,
  0,
  0,
  0,
  0,
};
externaldef(uil_sym_glbl) unsigned short int *uil_gadget_variants =
		uil_gadget_variants_vec;

/*  Define mapping of dialog types to non-dialog URM widget classes.  */
static unsigned short int uil_urm_nondialog_class_vec[] = {
  0,	/* NOT USED */
  0,
  sym_k_XmBulletinBoard_object,
  sym_k_XmBulletinBoard_object,
  0,
  0,
  sym_k_DtPrintSetupBox_object,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmBulletinBoard_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmCommand_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmFileSelectionBox_object,
  0,
  0,
  sym_k_XmForm_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmScrolledWindow_object,
  0,
  0,
  0,
  sym_k_XmMessageBox_object,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmRowColumn_object,
  sym_k_XmSelectionBox_object,
  sym_k_XmRowColumn_object,
  0,
  0,
  sym_k_XmMessageBox_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmSelectionBox_object,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmMessageBox_object,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmMessageBox_object,
  0,
  sym_k_XmMessageBox_object,
  0,
};
externaldef(uil_sym_glbl) unsigned short int *uil_urm_nondialog_class =
		uil_urm_nondialog_class_vec;

/*  Define mapping of widget controls to a (subtree) resource.  */
static unsigned short int uil_urm_subtree_resource_vec[] = {
  0,	/* NOT USED */
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmNsubMenuId_arg,
  sym_k_XmNsubMenuId_arg,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  sym_k_XmNsubMenuId_arg,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
};
externaldef(uil_sym_glbl) unsigned short int *uil_urm_subtree_resource =
		uil_urm_subtree_resource_vec;

/*  Define mapping of arguments to toolkit names.  */
static char *uil_argument_toolkit_names_vec[] = {
  "",	  /* NOT USED */
  DtNallowSendEvents,
  DtNappCursorDefault,
  DtNappKeypadDefault,
  DtNautoShowCursorPosition,
  DtNautoWrap,
  DtNbackLabelString,
  DtNbackgroundIsSelect,
  DtNbaseHeight,
  DtNbaseWidth,
  DtNblinkRate,
  DtNbuttonFontList,
  DtNc132,
  DtNcascadePixmap,
  DtNcenterToggleLabel,
  DtNchangeAllButtonLabel,
  DtNchangeButtonLabel,
  DtNchangeFieldLabel,
  DtNcharCursorStyle,
  DtNcloseLabelString,
  DtNcolumns,
  DtNconsoleMode,
  DtNcopies,
  DtNcsWidth,
  DtNcurrentLineLabel,
  DtNcursorPosition,
  DtNcursorPositionVisible,
  DtNdescription,
  DtNdialogTitle,
  DtNeditable,
  DtNemulationId,
  DtNexecutionPolicy,
  DtNfileName,
  DtNfindButtonLabel,
  DtNfindChangeDialogTitle,
  DtNfindFieldLabel,
  DtNformatAllButtonLabel,
  DtNformatParagraphButtonLabel,
  DtNformatSettingsDialogTitle,
  DtNheightInc,
  DtNhelpFile,
  DtNhelpLabelString,
  DtNhelpOnHelpVolume,
  DtNhelpPrint,
  DtNhelpType,
  DtNhelpVolume,
  DtNinformationDialogTitle,
  DtNinsertLabel,
  DtNjumpScroll,
  DtNjustifyToggleLabel,
  DtNkshMode,
  DtNlabelFontList,
  DtNleftAlignToggleLabel,
  DtNleftMarginFieldLabel,
  DtNlocationId,
  DtNlogFile,
  DtNlogInhibit,
  DtNlogging,
  DtNmanPage,
  DtNmapOnOutput,
  DtNmapOnOutputDelay,
  DtNmarginBell,
  DtNmarginHeight,
  DtNmarginWidth,
  DtNmaxLength,
  DtNminimizeButtons,
  DtNmisspelledListLabel,
  DtNmoreLabelString,
  DtNnMarginBell,
  DtNoverstrike,
  DtNoverstrikeLabel,
  DtNpaperSize,
  DtNpointerBlank,
  DtNpointerBlankDelay,
  DtNpointerColor,
  DtNpointerColorBackground,
  DtNpointerShape,
  DtNprintDestination,
  DtNprintLabelString,
  DtNprintSetupMode,
  DtNprinter,
  DtNprinterInfoProc,
  DtNprinterName,
  DtNreverseVideo,
  DtNreverseWrap,
  DtNrightAlignToggleLabel,
  DtNrightMarginFieldLabel,
  DtNrows,
  DtNsaveLines,
  DtNscrollBarPolicy,
  DtNscrollHorizontal,
  DtNscrollLeftSide,
  DtNscrollTopSide,
  DtNscrollVertical,
  DtNselectFileProc,
  DtNselectPrinterProc,
  DtNshadowType,
  DtNshowNewWindowButton,
  DtNshowStatusLine,
  DtNspellDialogTitle,
  DtNspellFilter,
  DtNstickyNextCursor,
  DtNstickyPrevCursor,
  DtNstringData,
  DtNsubMenuId,
  DtNsubprocessArgv,
  DtNsubprocessCmd,
  DtNsubprocessExec,
  DtNsubprocessLoginShell,
  DtNsubprocessPid,
  DtNsubprocessTerminationCatch,
  DtNsunFunctionKeys,
  DtNtermDevice,
  DtNtermDeviceAllocate,
  DtNtermId,
  DtNtermName,
  DtNtermSlaveName,
  DtNtextBackground,
  DtNtextFontList,
  DtNtextForeground,
  DtNtextTranslations,
  DtNtopCharacter,
  DtNtopicTitle,
  DtNtotalLineCountLabel,
  DtNttyModes,
  DtNuserBoldFont,
  DtNuserFont,
  DtNverifyPrinterProc,
  DtNverticalScrollBar,
  DtNvisiblePathCount,
  DtNvisualBell,
  DtNwidthInc,
  DtNwordWrap,
  DtNworkAreaLocation,
  XmN100DPIstring,
  XmN75DPIstring,
  XmNaccelerator,
  XmNacceleratorText,
  XmNaccelerators,
  XmNadjustLast,
  XmNadjustMargin,
  XmNalignment,
  XmNallowOverlap,
  XmNallowResize,
  XmNallowShellResize,
  XmNallowUnusedSpace,
  XmNancestorSensitive,
  XmNanyLowerString,
  XmNanyString,
  XmNapplyLabelString,
  XmNarmColor,
  XmNarmPixmap,
  XmNarrowDirection,
  XmNarrowLayout,
  XmNarrowOrientation,
  XmNarrowSensitivity,
  XmNarrowSize,
  XmNarrowSpacing,
  XmNaudibleWarning,
  XmNautoClose,
  XmNautoDragModel,
  XmNautoFill,
  XmNautoShowCursorPosition,
  XmNautoUnmanage,
  XmNautomaticSelection,
  XmNbackPageBackground,
  XmNbackPageForeground,
  XmNbackPageNumber,
  XmNbackPagePlacement,
  XmNbackPageSize,
  XmNbackground,
  XmNbackgroundPixmap,
  XmNbaseHeight,
  XmNbaseWidth,
  XmNbindingPixmap,
  XmNbindingType,
  XmNbindingWidth,
  XmNblinkRate,
  XmNblueSliderLabel,
  XmNboldString,
  XmNborderColor,
  XmNborderPixmap,
  XmNborderWidth,
  XmNbothString,
  XmNbottomAttachment,
  XmNbottomOffset,
  XmNbottomPosition,
  XmNbottomShadowColor,
  XmNbottomShadowPixmap,
  XmNbottomWidget,
  XmNbuttonCount,
  XmNbuttonFontList,
  XmNbuttonRenderTable,
  XmNbuttons,
  XmNcancelButton,
  XmNcancelLabelString,
  XmNcascadePixmap,
  XmNcellX,
  XmNcellY,
  XmNchildHorizontalAlignment,
  XmNchildHorizontalSpacing,
  XmNchildPlacement,
  XmNchildType,
  XmNchildVerticalAlignment,
  XmNclipWindow,
  XmNcloseFolderPixmap,
  XmNcollapsedStatePixmap,
  XmNcolorListTogLabel,
  XmNcolorMode,
  XmNcolorName,
  XmNcolormap,
  XmNcolumnTitles,
  XmNcolumns,
  XmNcomboBoxType,
  XmNcomboTranslations,
  XmNcommand,
  XmNcommandWindow,
  XmNcommandWindowLocation,
  XmNcompressStyle,
  XmNconnectNodes,
  XmNconnectStyle,
  XmNconstrainWidth,
  XmNcreatePopupChildProc,
  XmNcurrentFont,
  XmNcurrentPageNumber,
  XmNcursor,
  XmNcursorPosition,
  XmNcursorPositionVisible,
  XmNcustomizedCombinationBox,
  XmNdarkThreshold,
  XmNdecimal,
  XmNdecimalPoints,
  XmNdefaultArrowSensitivity,
  XmNdefaultButton,
  XmNdefaultButtonShadowThickness,
  XmNdefaultButtonType,
  XmNdefaultEncodingString,
  XmNdefaultEntryLabelAlignment,
  XmNdefaultEntryLabelFontList,
  XmNdefaultEntryLabelRenderTable,
  XmNdefaultFillStyle,
  XmNdefaultFontList,
  XmNdefaultPosition,
  XmNdeleteResponse,
  XmNdepth,
  XmNdetail,
  XmNdetailColumnHeading,
  XmNdetailColumnHeadingCount,
  XmNdetailCount,
  XmNdetailOrder,
  XmNdetailOrderCount,
  XmNdetailShadowThickness,
  XmNdetailTabList,
  XmNdialogStyle,
  XmNdialogTitle,
  XmNdialogType,
  XmNdirListItemCount,
  XmNdirListItems,
  XmNdirListLabelString,
  XmNdirMask,
  XmNdirSearchProc,
  XmNdirSpec,
  XmNdirectory,
  XmNdirectoryValid,
  XmNdistribution,
  XmNdoubleClickInterval,
  XmNeditMode,
  XmNeditable,
  XmNencodingList,
  XmNencodingString,
  XmNentryAlignment,
  XmNentryBackground,
  XmNentryBorder,
  XmNentryClass,
  XmNentryData,
  XmNentryLabelAlignment,
  XmNentryLabelFontList,
  XmNentryLabelPixmap,
  XmNentryLabelRenderTable,
  XmNentryLabelString,
  XmNentryLabelType,
  XmNentryParent,
  XmNentryVerticalAlignment,
  XmNentryViewType,
  XmNequalSize,
  XmNexpandedStatePixmap,
  XmNfamilyString,
  XmNfileListItemCount,
  XmNfileListItems,
  XmNfileListLabelString,
  XmNfileReadError,
  XmNfileSearchProc,
  XmNfileTypeMask,
  XmNfillOnArm,
  XmNfillOnSelect,
  XmNfillOption,
  XmNfillStyle,
  XmNfilterLabelString,
  XmNfindLabel,
  XmNfirstColumn,
  XmNfirstColumnPixmaps,
  XmNfirstPageNumber,
  XmNfirstRow,
  XmNfont,
  XmNfontEncoding,
  XmNfontFoundry,
  XmNfontList,
  XmNfontName,
  XmNfontSize,
  XmNfontStyle,
  XmNfontType,
  XmNforeground,
  XmNforegroundThreshold,
  XmNfractionBase,
  XmNframeBackground,
  XmNframeChildType,
  XmNframeShadowThickness,
  XmNfreeTabPixmap,
  XmNgeometry,
  XmNgreenSliderLabel,
  XmNheight,
  XmNheightInc,
  XmNhelpLabelString,
  XmNhighlightColor,
  XmNhighlightOnEnter,
  XmNhighlightPixmap,
  XmNhighlightThickness,
  XmNhistoryItemCount,
  XmNhistoryItems,
  XmNhistoryMaxItems,
  XmNhistoryVisibleItemCount,
  XmNhorizontalDelta,
  XmNhorizontalMargin,
  XmNhorizontalNodeSpace,
  XmNhorizontalScrollBar,
  XmNhorizontalSpacing,
  XmNiconMask,
  XmNiconName,
  XmNiconNameEncoding,
  XmNiconPixmap,
  XmNiconPlacement,
  XmNiconTextPadding,
  XmNiconWindow,
  XmNiconX,
  XmNiconY,
  XmNiconic,
  XmNincrement,
  XmNincrementValue,
  XmNindentSpace,
  XmNindeterminateInsensitivePixmap,
  XmNindeterminatePixmap,
  XmNindicatorOn,
  XmNindicatorSize,
  XmNindicatorType,
  XmNinitialDelay,
  XmNinitialFocus,
  XmNinitialResourcesPersistent,
  XmNinitialState,
  XmNinnerMarginHeight,
  XmNinnerMarginWidth,
  XmNinput,
  XmNinputMethod,
  XmNinputPolicy,
  XmNinsertBefore,
  XmNinsertPosition,
  XmNisAligned,
  XmNisHomogeneous,
  XmNitalicString,
  XmNitemCount,
  XmNitemSpacing,
  XmNitems,
  XmNkeyboardFocusPolicy,
  XmNlabel,
  XmNlabelFontList,
  XmNlabelInsensitivePixmap,
  XmNlabelPixmap,
  XmNlabelRenderTable,
  XmNlabelSpacing,
  XmNlabelString,
  XmNlabelType,
  XmNlargeCellHeight,
  XmNlargeCellWidth,
  XmNlargeIconMask,
  XmNlargeIconPixmap,
  XmNlargeIconX,
  XmNlargeIconY,
  XmNlastPageNumber,
  XmNlayoutDirection,
  XmNlayoutType,
  XmNleftAttachment,
  XmNleftOffset,
  XmNleftPosition,
  XmNleftWidget,
  XmNlightThreshold,
  XmNlineBackgroundColor,
  XmNlineColor,
  XmNlineStyle,
  XmNlineWidth,
  XmNlist,
  XmNlistItemCount,
  XmNlistItems,
  XmNlistLabelString,
  XmNlistMarginHeight,
  XmNlistMarginWidth,
  XmNlistSizePolicy,
  XmNlistSpacing,
  XmNlistUpdated,
  XmNlistVisibleItemCount,
  XmNloadModel,
  XmNmainWindowMarginHeight,
  XmNmainWindowMarginWidth,
  XmNmajorTabSpacing,
  XmNmappedWhenManaged,
  XmNmappingDelay,
  XmNmargin,
  XmNmarginBottom,
  XmNmarginHeight,
  XmNmarginLeft,
  XmNmarginRight,
  XmNmarginTop,
  XmNmarginWidth,
  XmNmatchBehavior,
  XmNmaxAspectX,
  XmNmaxAspectY,
  XmNmaxHeight,
  XmNmaxLength,
  XmNmaxWidth,
  XmNmaximum,
  XmNmaximumValue,
  XmNmenuAccelerator,
  XmNmenuBar,
  XmNmenuHelpWidget,
  XmNmenuHistory,
  XmNmenuPost,
  XmNmessageAlignment,
  XmNmessageString,
  XmNmessageWindow,
  XmNminAspectX,
  XmNminAspectY,
  XmNminHeight,
  XmNminWidth,
  XmNminimizeButtons,
  XmNminimum,
  XmNminimumCellHeight,
  XmNminimumCellWidth,
  XmNminimumHorizontalCells,
  XmNminimumValue,
  XmNminimumVerticalCells,
  XmNminorTabSpacing,
  XmNmnemonic,
  XmNmnemonicCharSet,
  XmNmonoSpaceString,
  XmNmultiClick,
  XmNmustMatch,
  XmNmwmDecorations,
  XmNmwmFunctions,
  XmNmwmInputMode,
  XmNmwmMenu,
  XmNnavigationType,
  XmNnewVisualStyle,
  XmNnoCellError,
  XmNnoMatchString,
  XmNnoResize,
  XmNnodeCloseFolderPixmap,
  XmNnodeOpenFolderPixmap,
  XmNnodeState,
  XmNnotebookChildType,
  XmNnumColumns,
  XmNnumRows,
  XmNnumStacks,
  XmNnumValues,
  XmNoffsetModel,
  XmNokLabelString,
  XmNopenClosePadding,
  XmNopenFolderPixmap,
  XmNoptionString,
  XmNorientation,
  XmNotherString,
  XmNoutlineButtonPolicy,
  XmNoutlineColumnWidth,
  XmNoutlineIndentation,
  XmNoutlineLineStyle,
  XmNoutlineState,
  XmNoverrideRedirect,
  XmNpacking,
  XmNpageIncrement,
  XmNpageNumber,
  XmNpaneMaximum,
  XmNpaneMinimum,
  XmNparentNode,
  XmNpattern,
  XmNpendingDelete,
  XmNpicture,
  XmNpixmap,
  XmNpixmapDepth,
  XmNpixmapHeight,
  XmNpixmapPlacement,
  XmNpixmapTextPadding,
  XmNpixmapWidth,
  XmNpopupCursor,
  XmNpopupEnabled,
  XmNpopupOffset,
  XmNpopupShellWidget,
  XmNposition,
  XmNpositionIndex,
  XmNpositionMode,
  XmNpositionType,
  XmNpreeditType,
  XmNpreferredPaneSize,
  XmNprimaryOwnership,
  XmNprocessingDirection,
  XmNpromptString,
  XmNpropSpaceString,
  XmNpushButtonEnabled,
  XmNqualifySearchDataProc,
  XmNradioAlwaysOne,
  XmNradioBehavior,
  XmNrecomputeSize,
  XmNredSliderLabel,
  XmNrefigureMode,
  XmNrenderTable,
  XmNrenditionBackground,
  XmNrenditionForeground,
  XmNrepeatDelay,
  XmNresizable,
  XmNresizeHeight,
  XmNresizePolicy,
  XmNresizeToPreferred,
  XmNresizeWidth,
  XmNrgbFile,
  XmNrightAttachment,
  XmNrightOffset,
  XmNrightPosition,
  XmNrightWidget,
  XmNrowColumnType,
  XmNrows,
  XmNrubberPositioning,
  XmNsampleText,
  XmNsashHeight,
  XmNsashIndent,
  XmNsashShadowThickness,
  XmNsashTranslations,
  XmNsashWidth,
  XmNsaveUnder,
  XmNscaleHeight,
  XmNscaleMultiple,
  XmNscaleWidth,
  XmNscalingString,
  XmNscreen,
  XmNscrollBarDisplayPolicy,
  XmNscrollBarPlacement,
  XmNscrollHorizontal,
  XmNscrollLeftSide,
  XmNscrollTopSide,
  XmNscrollVertical,
  XmNscrolledWindowChildType,
  XmNscrolledWindowMarginHeight,
  XmNscrolledWindowMarginWidth,
  XmNscrollingPolicy,
  XmNselectColor,
  XmNselectInsensitivePixmap,
  XmNselectPixmap,
  XmNselectThreshold,
  XmNselectedColumn,
  XmNselectedItem,
  XmNselectedItemCount,
  XmNselectedItems,
  XmNselectedPosition,
  XmNselectedPositionCount,
  XmNselectedPositions,
  XmNselectionArray,
  XmNselectionArrayCount,
  XmNselectionLabelString,
  XmNselectionMode,
  XmNselectionPolicy,
  XmNselectionTechnique,
  XmNsensitive,
  XmNseparatorOn,
  XmNseparatorType,
  XmNset,
  XmNshadowThickness,
  XmNshadowType,
  XmNshellUnitType,
  XmNshowArrows,
  XmNshowAsDefault,
  XmNshowEntryLabel,
  XmNshowFind,
  XmNshowFontName,
  XmNshowLabel,
  XmNshowNameString,
  XmNshowSash,
  XmNshowSeparator,
  XmNshowValue,
  XmNsizeString,
  XmNskipAdjust,
  XmNsliderMark,
  XmNsliderSize,
  XmNsliderTogLabel,
  XmNsliderVisual,
  XmNslidingMode,
  XmNsmallCellHeight,
  XmNsmallCellWidth,
  XmNsmallIconMask,
  XmNsmallIconPixmap,
  XmNsmallIconX,
  XmNsmallIconY,
  XmNsnapBackMultiple,
  XmNsortFunctions,
  XmNsource,
  XmNspacing,
  XmNspatialIncludeModel,
  XmNspatialResizeModel,
  XmNspatialSnapModel,
  XmNspatialStyle,
  XmNspinBoxChildType,
  XmNstackedEffect,
  XmNstretchable,
  XmNstrikethruType,
  XmNstringDirection,
  XmNsubMenuId,
  XmNsymbolPixmap,
  XmNtabAlignment,
  XmNtabAutoSelect,
  XmNtabBackground,
  XmNtabBackgroundPixmap,
  XmNtabCornerPercent,
  XmNtabEdge,
  XmNtabForeground,
  XmNtabLabelPixmap,
  XmNtabLabelSpacing,
  XmNtabLabelString,
  XmNtabList,
  XmNtabMarginHeight,
  XmNtabMarginWidth,
  XmNtabMode,
  XmNtabOffset,
  XmNtabOrientation,
  XmNtabPixmapPlacement,
  XmNtabSelectColor,
  XmNtabSelectPixmap,
  XmNtabSide,
  XmNtabStringDirection,
  XmNtabStyle,
  XmNtabValue,
  XmNtearOffModel,
  XmNtearOffTitle,
  XmNtextAccelerators,
  XmNtextColumns,
  XmNtextField,
  XmNtextFontList,
  XmNtextRenderTable,
  XmNtextRows,
  XmNtextString,
  XmNtextTranslations,
  XmNtitle,
  XmNtitleEncoding,
  XmNtitleString,
  XmNtoggleMode,
  XmNtoolTipEnable,
  XmNtoolTipPostDelay,
  XmNtoolTipPostDuration,
  XmNtoolTipString,
  XmNtopAttachment,
  XmNtopCharacter,
  XmNtopItemPosition,
  XmNtopOffset,
  XmNtopPosition,
  XmNtopShadowColor,
  XmNtopShadowPixmap,
  XmNtopWidget,
  XmNtransient,
  XmNtransientFor,
  XmNtranslations,
  XmNtraversalOn,
  XmNtroughColor,
  XmNunderlineType,
  XmNuniformTabSize,
  XmNunitType,
  XmNunpostBehavior,
  XmNunselectColor,
  XmNuseAsyncGeometry,
  XmNuseImageCache,
  XmNuseScaling,
  XmNuseTextField,
  XmNuserData,
  XmNvalue,
  XmNvalueWcs,
  XmNvalues,
  XmNverify,
  XmNverifyBell,
  XmNverticalDelta,
  XmNverticalMargin,
  XmNverticalNodeSpace,
  XmNverticalScrollBar,
  XmNverticalSpacing,
  XmNviewType,
  XmNvisibleItemCount,
  XmNvisibleWhenOff,
  XmNvisual,
  XmNvisualEmphasis,
  XmNvisualPolicy,
  XmNwaitForWm,
  XmNwhichButton,
  XmNwidth,
  XmNwidthInc,
  XmNwinGravity,
  XmNwindowGroup,
  XmNwmTimeout,
  XmNwordWrap,
  XmNworkWindow,
  XmNwrap,
  XmNx,
  XmNxlfdString,
  XmNy,
  XmStringComponent,
};
externaldef(uil_sym_glbl) char **uil_argument_toolkit_names =
		uil_argument_toolkit_names_vec;

/*  Define mapping of reasons to toolkit names.  */
static char *uil_reason_toolkit_names_vec[] = {
  "",	/* NOT USED */
  DtNcancelCallback,
  DtNcascadingCallback,
  DtNcloseCallback,
  DtNclosePrintDisplayCallback,
  DtNhyperLinkCallback,
  DtNinputVerifyCallback,
  DtNoutputLogCallback,
  DtNprintCallback,
  DtNsetupCallback,
  DtNstatusChangeCallback,
  DtNsubprocessTerminationCallback,
  DtNtextDeselectCallback,
  DtNtextSelectCallback,
  MrmNcreateCallback,
  XmNactivateCallback,
  XmNapplyCallback,
  XmNarmCallback,
  XmNbrowseSelectionCallback,
  XmNcancelCallback,
  XmNcascadingCallback,
  XmNcommandChangedCallback,
  XmNcommandEnteredCallback,
  XmNconvertCallback,
  XmNdecrementCallback,
  XmNdefaultActionCallback,
  XmNdestinationCallback,
  XmNdestroyCallback,
  XmNdisarmCallback,
  XmNdoubleClickCallback,
  XmNdragCallback,
  XmNentryCallback,
  XmNexposeCallback,
  XmNextendedSelectionCallback,
  XmNfocusCallback,
  XmNfocusMovedCallback,
  XmNgainPrimaryCallback,
  XmNhelpCallback,
  XmNincrementCallback,
  XmNinputCallback,
  XmNitemFoundCallback,
  XmNitemNotFoundCallback,
  XmNlosePrimaryCallback,
  XmNlosingFocusCallback,
  XmNmapCallback,
  XmNmodifyVerifyCallback,
  XmNmodifyVerifyCallbackWcs,
  XmNmotionVerifyCallback,
  XmNmultipleSelectionCallback,
  XmNnoMatchCallback,
  XmNnodeStateBegEndCallback,
  XmNnodeStateCallback,
  XmNnodeStateChangedCallback,
  XmNokCallback,
  XmNoutlineChangedCallback,
  XmNpageChangedCallback,
  XmNpageDecrementCallback,
  XmNpageIncrementCallback,
  XmNpictureErrorCallback,
  XmNpopdownCallback,
  XmNpopupCallback,
  XmNpopupHandlerCallback,
  XmNrealizeCallback,
  XmNresizeCallback,
  XmNselectCallback,
  XmNselectionCallback,
  XmNsimpleCallback,
  XmNsingleSelectionCallback,
  XmNtabSelectedCallback,
  XmNtearOffMenuActivateCallback,
  XmNtearOffMenuDeactivateCallback,
  XmNtoBottomCallback,
  XmNtoTopCallback,
  XmNtraversalCallback,
  XmNtraverseObscuredCallback,
  XmNunmapCallback,
  XmNunselectCallback,
  XmNupdateShellCallback,
  XmNupdateTextCallback,
  XmNvalidateCallback,
  XmNvalueChangedCallback,
  XmNverifyTextCallback,
};
externaldef(uil_sym_glbl) char **uil_reason_toolkit_names =
		uil_reason_toolkit_names_vec;
