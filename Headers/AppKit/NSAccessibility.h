#import <Foundation/NSObject.h>
#import <Foundation/NSGeometry.h>

@class NSString;
@class NSArray;

@interface NSObject (NSAccessibility)

- (NSString*) accessibilityActionDescription: (NSString*) action;

- (NSArray*) accessibilityActionNames;

- (NSUInteger) accessibilityArrayAttributeCount: (NSString*) attribute;

- (NSArray*) accessibilityArrayAttributeValues: (NSString*) attribute
                                         index: (NSUInteger) index
                                      maxCount: (NSUInteger) maxCount;

- (NSArray*) accessibilityAttributeNames;

- (id) accessibilityAttributeValue: (NSString*) attribute;

- (id) accessibilityAttributeValue: (NSString*) attribute
                      forParameter: (id) parameter;

- (id) accessibilityFocusedUIElement;

- (id) accessibilityHitTest: (NSPoint) point;

- (NSUInteger) accessibilityIndexOfChild: (id) child;

- (BOOL) accessibilityIsAttributeSettable: (NSString*) attribute;

- (BOOL) accessibilityIsIgnored;

- (NSArray*) accessibilityParameterizedAttributeNames;

- (void) accessibilityPerformAction: (NSString*) action;

- (void) accessibilitySetValue: (id) value
                  forAttribute: (NSString*) attribute;

@end

@interface NSObject (NSAccessibilityAdditions)

- (BOOL) accessibilitySetOverrideValue: (id) value
                          forAttribute: (NSString*) attribute;

@end

// Standard constants
NSString *const NSAccessibilityChildrenAttribute;
NSString *const NSAccessibilityContentsAttribute;
NSString *const NSAccessibilityDescriptionAttribute;
NSString *const NSAccessibilityEnabledAttribute;
NSString *const NSAccessibilityFocusedAttribute;
NSString *const NSAccessibilityHelpAttribute;
NSString *const NSAccessibilityMaxValueAttribute;
NSString *const NSAccessibilityMinValueAttribute;
NSString *const NSAccessibilityParentAttribute;
NSString *const NSAccessibilityPositionAttribute;
NSString *const NSAccessibilityRoleAttribute;
NSString *const NSAccessibilityRoleDescriptionAttribute;
NSString *const NSAccessibilitySelectedChildrenAttribute;
NSString *const NSAccessibilityShownMenuAttribute;
NSString *const NSAccessibilitySizeAttribute;
NSString *const NSAccessibilitySubroleAttribute;
NSString *const NSAccessibilityTitleAttribute;
NSString *const NSAccessibilityTopLevelUIElementAttribute;
NSString *const NSAccessibilityValueAttribute;
NSString *const NSAccessibilityValueDescriptionAttribute;
NSString *const NSAccessibilityVisibleChildrenAttribute;
NSString *const NSAccessibilityWindowAttribute;

// Text attributes
NSString *const NSAccessibilityInsertionPointLineNumberAttribute;
NSString *const NSAccessibilityNumberOfCharactersAttribute;
NSString *const NSAccessibilitySelectedTextAttribute;
NSString *const NSAccessibilitySelectedTextRangeAttribute;
NSString *const NSAccessibilitySelectedTextRangesAttribute;
NSString *const NSAccessibilitySharedCharacterRangeAttribute;
NSString *const NSAccessibilitySharedTextUIElementsAttribute;
NSString *const NSAccessibilityVisibleCharacterRangeAttribute;

// Text parameterized attributes
NSString *const NSAccessibilityAttributedStringForRangeParameterizedAttribute;
NSString *const NSAccessibilityBoundsForRangeParameterizedAttribute;
NSString *const NSAccessibilityLineForIndexParameterizedAttribute;
NSString *const NSAccessibilityRTFForRangeParameterizedAttribute;
NSString *const NSAccessibilityRangeForIndexParameterizedAttribute;
NSString *const NSAccessibilityRangeForLineParameterizedAttribute;
NSString *const NSAccessibilityRangeForPositionParameterizedAttribute;
NSString *const NSAccessibilityStringForRangeParameterizedAttribute;
NSString *const NSAccessibilityStyleRangeForIndexParameterizedAttribute;

// Attributed string constants
NSString *const NSAccessibilityAttachmentTextAttribute;
NSString *const NSAccessibilityBackgroundColorTextAttribute;
NSString *const NSAccessibilityFontFamilyKey;
NSString *const NSAccessibilityFontNameKey;
NSString *const NSAccessibilityFontSizeKey;
NSString *const NSAccessibilityFontTextAttribute;
NSString *const NSAccessibilityForegroundColorTextAttribute;
NSString *const NSAccessibilityLinkTextAttribute;
NSString *const NSAccessibilityMisspelledTextAttribute;
NSString *const NSAccessibilityShadowTextAttribute;
NSString *const NSAccessibilityStrikethroughColorTextAttribute;
NSString *const NSAccessibilityStrikethroughTextAttribute;
NSString *const NSAccessibilitySuperscriptTextAttribute;
NSString *const NSAccessibilityUnderlineColorTextAttribute;
NSString *const NSAccessibilityUnderlineTextAttribute;
NSString *const NSAccessibilityVisibleNameKey;

// Window attributes
NSString *const NSAccessibilityCancelButtonAttribute;
NSString *const NSAccessibilityCloseButtonAttribute;
NSString *const NSAccessibilityDefaultButtonAttribute;
NSString *const NSAccessibilityGrowAreaAttribute;
NSString *const NSAccessibilityMainAttribute;
NSString *const NSAccessibilityMinimizeButtonAttribute;
NSString *const NSAccessibilityMinimizedAttribute;
NSString *const NSAccessibilityModalAttribute;
NSString *const NSAccessibilityProxyAttribute;
NSString *const NSAccessibilityToolbarButtonAttribute;
NSString *const NSAccessibilityZoomButtonAttribute;

// Orientations
NSString *const NSAccessibilityHorizontalOrientationValue;
NSString *const NSAccessibilityVerticalOrientationValue;
NSString *const NSAccessibilityUnknownOrientationValue;

// App specific attributes
NSString *const NSAccessibilityClearButtonAttribute;
NSString *const NSAccessibilityColumnTitlesAttribute;
NSString *const NSAccessibilityFocusedUIElementAttribute;
NSString *const NSAccessibilityFocusedWindowAttribute;
NSString *const NSAccessibilityFrontmostAttribute;
NSString *const NSAccessibilityHiddenAttribute;
NSString *const NSAccessibilityMainWindowAttribute;
NSString *const NSAccessibilityMenuBarAttribute;
NSString *const NSAccessibilityOrientationAttribute;
NSString *const NSAccessibilitySearchButtonAttribute;
NSString *const NSAccessibilitySearchMenuAttribute;
NSString *const NSAccessibilityWindowsAttribute;

// Grid view attributes
NSString *const NSAccessibilityColumnCountAttribute;
NSString *const NSAccessibilityOrderedByRowAttribute;
NSString *const NSAccessibilityRowCountAttribute;

// Table and outline view attributes
NSString *const NSAccessibilityColumnHeaderUIElementsAttribute;
NSString *const NSAccessibilityColumnsAttribute;
NSString *const NSAccessibilityRowHeaderUIElementsAttribute;
NSString *const NSAccessibilityRowsAttribute;
NSString *const NSAccessibilitySelectedColumnsAttribute;
NSString *const NSAccessibilitySelectedRowsAttribute;
NSString *const NSAccessibilitySortDirectionAttribute;
NSString *const NSAccessibilityVisibleColumnsAttribute;
NSString *const NSAccessibilityVisibleRowsAttribute;

// Outline view attributes
NSString *const NSAccessibilityDisclosedByRowAttribute;
NSString *const NSAccessibilityDisclosedRowsAttribute;
NSString *const NSAccessibilityDisclosingAttribute;
NSString *const NSAccessibilityDisclosureLevelAttribute;

// Table cell attributes
NSString *const NSAccessibilitySelectedCellsAttribute;
NSString *const NSAccessibilityVisibleCellsAttribute;

// Cell attributes
NSString *const NSAccessibilityRowIndexRangeAttribute;
NSString *const NSAccessibilityColumnIndexRangeAttribute;

// Column sort direction
NSString *const NSAccessibilityAscendingSortDirectionValue;
NSString *const NSAccessibilityDescendingSortDirectionValue;
NSString *const NSAccessibilityUnknownSortDirectionValue;

// Layout area attributes
NSString *const NSAccessibilityHorizontalUnitsAttribute;
NSString *const NSAccessibilityVerticalUnitsAttribute;
NSString *const NSAccessibilityHorizontalUnitDescriptionAttribute;
NSString *const NSAccessibilityVerticalUnitDescriptionAttribute;

// Layout area parameterized attributes
NSString *const NSAccessibilityLayoutPointForScreenPointParameterizedAttribute;
NSString *const NSAccessibilityLayoutSizeForScreenSizeParameterizedAttribute;
NSString *const NSAccessibilityScreenPointForLayoutPointParameterizedAttribute;
NSString *const NSAccessibilityScreenSizeForLayoutSizeParameterizedAttribute;

// Layout item attributes
NSString *const NSAccessibilityHandlesAttribute;

// Slider attributes
NSString *const NSAccessibilityAllowedValuesAttribute;
NSString *const NSAccessibilityLabelUIElementsAttribute;
NSString *const NSAccessibilityLabelValueAttribute;

// Screen matte attributes
NSString *const NSAccessibilityMatteContentUIElementAttribute;
NSString *const NSAccessibilityMatteHoleAttribute;

// Ruler view attributes
NSString *const NSAccessibilityMarkerGroupUIElementAttribute;
NSString *const NSAccessibilityMarkerTypeAttribute;
NSString *const NSAccessibilityMarkerTypeDescriptionAttribute;
NSString *const NSAccessibilityMarkerUIElementsAttribute;
NSString *const NSAccessibilityMarkerValuesAttribute;
NSString *const NSAccessibilityUnitDescriptionAttribute;
NSString *const NSAccessibilityUnitsAttribute;

// Ruler marker attributes
NSString *const NSAccessibilityCenterTabStopMarkerTypeValue;
NSString *const NSAccessibilityDecimalTabStopMarkerTypeValue;
NSString *const NSAccessibilityFirstLineIndentMarkerTypeValue;
NSString *const NSAccessibilityHeadIndentMarkerTypeValue;
NSString *const NSAccessibilityLeftTabStopMarkerTypeValue;
NSString *const NSAccessibilityRightTabStopMarkerTypeValue;
NSString *const NSAccessibilityTailIndentMarkerTypeValue;
NSString *const NSAccessibilityUnknownMarkerTypeValue;

// Measurement unit attributes
NSString *const NSAccessibilityCentimetersUnitValue;
NSString *const NSAccessibilityInchesUnitValue;
NSString *const NSAccessibilityPicasUnitValue;
NSString *const NSAccessibilityPointsUnitValue;
NSString *const NSAccessibilityUnknownUnitValue;

// Linkage elements
NSString *const NSAccessibilityLinkedUIElementsAttribute;
NSString *const NSAccessibilityServesAsTitleForUIElementsAttribute;
NSString *const NSAccessibilityTitleUIElementAttribute;

// Misc attributes
NSString *const NSAccessibilityDecrementButtonAttribute;
NSString *const NSAccessibilityDocumentAttribute;
NSString *const NSAccessibilityEditedAttribute;
NSString *const NSAccessibilityExpandedAttribute;
NSString *const NSAccessibilityFilenameAttribute;
NSString *const NSAccessibilityHeaderAttribute;
NSString *const NSAccessibilityHorizontalScrollBarAttribute;
NSString *const NSAccessibilityIncrementButtonAttribute;
NSString *const NSAccessibilityIndexAttribute;
NSString *const NSAccessibilityNextContentsAttribute;
NSString *const NSAccessibilityOverflowButtonAttribute;
NSString *const NSAccessibilityPreviousContentsAttribute;
NSString *const NSAccessibilitySelectedAttribute;
NSString *const NSAccessibilitySplittersAttribute;
NSString *const NSAccessibilityTabsAttribute;
NSString *const NSAccessibilityURLAttribute;
NSString *const NSAccessibilityVerticalScrollBarAttribute;
NSString *const NSAccessibilityWarningValueAttribute;
NSString *const NSAccessibilityCriticalValueAttribute;
NSString *const NSAccessibilityPlaceholderValueAttribute;

// Roles
NSString *const NSAccessibilityApplicationRole;
NSString *const NSAccessibilityBrowserRole;
NSString *const NSAccessibilityBusyIndicatorRole;
NSString *const NSAccessibilityButtonRole;
NSString *const NSAccessibilityCellRole;
NSString *const NSAccessibilityCheckBoxRole;
NSString *const NSAccessibilityColorWellRole;
NSString *const NSAccessibilityColumnRole;
NSString *const NSAccessibilityComboBoxRole;
NSString *const NSAccessibilityDisclosureTriangleRole;
NSString *const NSAccessibilityDrawerRole;
NSString *const NSAccessibilityGridRole;
NSString *const NSAccessibilityGroupRole;
NSString *const NSAccessibilityGrowAreaRole;
NSString *const NSAccessibilityHandleRole;
NSString *const NSAccessibilityHelpTagRole;
NSString *const NSAccessibilityImageRole;
NSString *const NSAccessibilityIncrementorRole;
NSString *const NSAccessibilityLayoutAreaRole;
NSString *const NSAccessibilityLayoutItemRole;
NSString *const NSAccessibilityLinkRole;
NSString *const NSAccessibilityListRole;
NSString *const NSAccessibilityLevelIndicatorRole;
NSString *const NSAccessibilityMatteRole;
NSString *const NSAccessibilityMenuBarRole;
NSString *const NSAccessibilityMenuButtonRole;
NSString *const NSAccessibilityMenuItemRole;
NSString *const NSAccessibilityMenuRole;
NSString *const NSAccessibilityOutlineRole;
NSString *const NSAccessibilityPopUpButtonRole;
NSString *const NSAccessibilityProgressIndicatorRole;
NSString *const NSAccessibilityRadioButtonRole;
NSString *const NSAccessibilityRadioGroupRole;
NSString *const NSAccessibilityRelevanceIndicatorRole;
NSString *const NSAccessibilityRowRole;
NSString *const NSAccessibilityRulerMarkerRole;
NSString *const NSAccessibilityRulerRole;
NSString *const NSAccessibilityScrollAreaRole;
NSString *const NSAccessibilityScrollBarRole;
NSString *const NSAccessibilitySheetRole;
NSString *const NSAccessibilitySliderRole;
NSString *const NSAccessibilitySortButtonRole;
NSString *const NSAccessibilitySplitGroupRole;
NSString *const NSAccessibilitySplitterRole;
NSString *const NSAccessibilityStaticTextRole;
NSString *const NSAccessibilitySystemWideRole;
NSString *const NSAccessibilityTabGroupRole;
NSString *const NSAccessibilityTableRole;
NSString *const NSAccessibilityTextAreaRole;
NSString *const NSAccessibilityTextFieldRole;
NSString *const NSAccessibilityToolbarRole;
NSString *const NSAccessibilityUnknownRole;
NSString *const NSAccessibilityValueIndicatorRole;
NSString *const NSAccessibilityWindowRole;

// Sub-roles
NSString *const NSAccessibilityCloseButtonSubrole;
NSString *const NSAccessibilityDecrementArrowSubrole;
NSString *const NSAccessibilityDecrementPageSubrole;
NSString *const NSAccessibilityDialogSubrole;
NSString *const NSAccessibilityFloatingWindowSubrole;
NSString *const NSAccessibilityIncrementArrowSubrole;
NSString *const NSAccessibilityIncrementPageSubrole;
NSString *const NSAccessibilityMinimizeButtonSubrole;
NSString *const NSAccessibilityOutlineRowSubrole;
NSString *const NSAccessibilitySearchFieldSubrole;
NSString *const NSAccessibilitySecureTextFieldSubrole;
NSString *const NSAccessibilityStandardWindowSubrole;
NSString *const NSAccessibilitySystemDialogSubrole;
NSString *const NSAccessibilitySystemFloatingWindowSubrole;
NSString *const NSAccessibilityTableRowSubrole;
NSString *const NSAccessibilityTextAttachmentSubrole;
NSString *const NSAccessibilityTextLinkSubrole;
NSString *const NSAccessibilityTimelineSubrole;
NSString *const NSAccessibilityToolbarButtonSubrole;
NSString *const NSAccessibilityUnknownSubrole;
NSString *const NSAccessibilityZoomButtonSubrole;
NSString *const NSAccessibilitySortButtonSubrole;
NSString *const NSAccessibilityRatingIndicatorSubrole;
NSString *const NSAccessibilityContentListSubrole;
NSString *const NSAccessibilityDefinitionListSubrole;

// Actions
NSString *const NSAccessibilityCancelAction;
NSString *const NSAccessibilityConfirmAction;
NSString *const NSAccessibilityDecrementAction;
NSString *const NSAccessibilityDeleteAction;
NSString *const NSAccessibilityIncrementAction;
NSString *const NSAccessibilityPickAction;
NSString *const NSAccessibilityPressAction;
NSString *const NSAccessibilityRaiseAction;
NSString *const NSAccessibilityShowMenuAction;

// Focus change notifications
NSString *const NSAccessibilityMainWindowChangedNotification;
NSString *const NSAccessibilityFocusedWindowChangedNotification;
NSString *const NSAccessibilityFocusedUIElementChangedNotification;

// Window change notifications
NSString *const NSAccessibilityWindowCreatedNotification;
NSString *const NSAccessibilityWindowDeminiaturizedNotification;
NSString *const NSAccessibilityWindowMiniaturizedNotification;
NSString *const NSAccessibilityWindowMovedNotification;
NSString *const NSAccessibilityWindowResizedNotification;

// Application notifications
NSString *const NSAccessibilityApplicationActivatedNotification;
NSString *const NSAccessibilityApplicationDeactivatedNotification;
NSString *const NSAccessibilityApplicationHiddenNotification;
NSString *const NSAccessibilityApplicationShownNotification;

// Drawer and sheet notifications
NSString *const NSAccessibilityDrawerCreatedNotification;
NSString *const NSAccessibilitySheetCreatedNotification;

// Element notifications
NSString *const NSAccessibilityCreatedNotification;
NSString *const NSAccessibilityMovedNotification;
NSString *const NSAccessibilityResizedNotification;
NSString *const NSAccessibilityTitleChangedNotification;
NSString *const NSAccessibilityUIElementDestroyedNotification;
NSString *const NSAccessibilityValueChangedNotification;

// Misc notifications
NSString *const NSAccessibilityHelpTagCreatedNotification;
NSString *const NSAccessibilityRowCountChangedNotification;
NSString *const NSAccessibilitySelectedChildrenChangedNotification;
NSString *const NSAccessibilitySelectedColumnsChangedNotification;
NSString *const NSAccessibilitySelectedRowsChangedNotification;
NSString *const NSAccessibilitySelectedTextChangedNotification;
NSString *const NSAccessibilityRowExpandedNotification;
NSString *const NSAccessibilityRowCollapsedNotification;
NSString *const NSAccessibilitySelectedCellsChangedNotification;
NSString *const NSAccessibilityUnitsChangedNotification;
NSString *const NSAccessibilitySelectedChildrenMovedNotification;

// Exception info
NSString *const NSAccessibilityErrorCodeExceptionInfo;
