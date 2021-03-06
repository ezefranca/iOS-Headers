/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDDocument;

@interface WDTableCellProperties : NSObject
{
    short mWidth;
    short mPosition;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_a2d9a432 mOriginalProperties;
    CDStruct_a2d9a432 mTrackedProperties;
    WDDocument *mDocument;
}

- (id)init;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (short)width;
- (void)setWidth:(short)arg1;
- (short)position;
- (void)setPosition:(short)arg1;
- (int)resolveMode;
- (void)setResolveMode:(int)arg1;
- (void)addProperties:(id)arg1;
- (void)originalToTracked;
- (id)shading;
- (id)mutableShading;
- (BOOL)isShadingOverridden;
- (void)clearShading;
- (id)topBorder;
- (id)mutableTopBorder;
- (BOOL)isTopBorderOverridden;
- (id)leftBorder;
- (id)mutableLeftBorder;
- (BOOL)isLeftBorderOverridden;
- (id)bottomBorder;
- (id)mutableBottomBorder;
- (BOOL)isBottomBorderOverridden;
- (id)rightBorder;
- (id)mutableRightBorder;
- (BOOL)isRightBorderOverridden;
- (id)diagonalUpBorder;
- (id)mutableDiagonalUpBorder;
- (BOOL)isDiagonalUpBorderOverridden;
- (id)diagonalDownBorder;
- (id)mutableDiagonalDownBorder;
- (BOOL)isDiagonalDownBorderOverridden;
- (id)insideHorizontalBorder;
- (id)mutableInsideHorizontalBorder;
- (BOOL)isInsideHorizontalBorderOverridden;
- (id)insideVerticalBorder;
- (id)mutableInsideVerticalBorder;
- (BOOL)isInsideVerticalBorderOverridden;
- (int)widthType;
- (void)setWidthType:(int)arg1;
- (BOOL)isWidthTypeOverridden;
- (short)topMargin;
- (void)setTopMargin:(short)arg1;
- (BOOL)isTopMarginOverridden;
- (int)topMarginType;
- (void)setTopMarginType:(int)arg1;
- (BOOL)isTopMarginTypeOverridden;
- (short)bottomMargin;
- (void)setBottomMargin:(short)arg1;
- (BOOL)isBottomMarginOverridden;
- (int)bottomMarginType;
- (void)setBottomMarginType:(int)arg1;
- (BOOL)isBottomMarginTypeOverridden;
- (short)leftMargin;
- (void)setLeftMargin:(short)arg1;
- (BOOL)isLeftMarginOverridden;
- (int)leftMarginType;
- (void)setLeftMarginType:(int)arg1;
- (BOOL)isLeftMarginTypeOverridden;
- (short)rightMargin;
- (void)setRightMargin:(short)arg1;
- (BOOL)isRightMarginOverridden;
- (int)rightMarginType;
- (void)setRightMarginType:(int)arg1;
- (BOOL)isRightMarginTypeOverridden;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (BOOL)isVerticalAlignmentOverridden;
- (BOOL)verticallyMergedCell;
- (void)setVerticallyMergedCell:(BOOL)arg1;
- (BOOL)isVerticallyMergedCellOverridden;
- (BOOL)firstInSetOfVerticallyMergedCells;
- (void)setFirstInSetOfVerticallyMergedCells:(BOOL)arg1;
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;
- (BOOL)noWrap;
- (void)setNoWrap:(BOOL)arg1;
- (BOOL)isNoWrapOverridden;
- (int)deleted;
- (void)setDeleted:(int)arg1;
- (BOOL)isDeletedOverridden;
- (int)edited;
- (void)setEdited:(int)arg1;
- (BOOL)isEditedOverridden;
- (int)formattingChanged;
- (void)setFormattingChanged:(int)arg1;
- (BOOL)isFormattingChangedOverridden;
- (unsigned short)indexToAuthorIDOfDeletion;
- (void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;
- (unsigned short)indexToAuthorIDOfEdit;
- (void)setIndexToAuthorIDOfEdit:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfEditOverridden;
- (unsigned short)indexToAuthorIDOfFormattingChange;
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
- (id)deletionDate;
- (void)setDeletionDate:(id)arg1;
- (BOOL)isDeletionDateOverridden;
- (id)editDate;
- (void)setEditDate:(id)arg1;
- (BOOL)isEditDateOverridden;
- (id)formattingChangeDate;
- (void)setFormattingChangeDate:(id)arg1;
- (BOOL)isFormattingChangeDateOverridden;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

