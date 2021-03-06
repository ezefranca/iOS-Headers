/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WDDocument;

@interface WDCharacterProperties : NSObject
{
    WDDocument *mDocument;
    unsigned int mOriginal:1;
    unsigned int mTracked:1;
    unsigned int mResolved:1;
    CDStruct_1683466b *mOriginalProperties;
    CDStruct_1683466b *mTrackedProperties;
}

+ (SEL)fontSelectorForLanguageType:(int)arg1;
+ (SEL)fontOverriddenSelectorForLanguageType:(int)arg1;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)document;
- (BOOL)isAnythingOverridden;
- (int)resolveMode;
- (void)setResolveMode:(int)arg1;
- (void)negateFormattingChangesWithDefaults:(id)arg1;
- (void)applyPropertiesFrom:(id)arg1 ifOverriddenIn:(id)arg2;
- (void)removeEmptyFormattingChanges:(id)arg1;
- (id)baseStyle;
- (void)setBaseStyle:(id)arg1;
- (BOOL)isBaseStyleOverridden;
- (void)clearBaseStyle;
- (id)border;
- (id)mutableBorder;
- (BOOL)isBorderOverridden;
- (id)shading;
- (id)mutableShading;
- (BOOL)isShadingOverridden;
- (id)font;
- (void)setFont:(id)arg1;
- (BOOL)isFontOverridden;
- (id)extendedFont;
- (void)setExtendedFont:(id)arg1;
- (BOOL)isExtendedFontOverridden;
- (id)farEastFont;
- (void)setFarEastFont:(id)arg1;
- (BOOL)isFarEastFontOverridden;
- (id)symbolFont;
- (void)setSymbolFont:(id)arg1;
- (BOOL)isSymbolFontOverridden;
- (id)fontForLanguageType:(int)arg1;
- (BOOL)isFontOverriddenForLanguageType:(int)arg1;
- (unsigned short)symbolCharacter;
- (void)setSymbolCharacter:(unsigned short)arg1;
- (BOOL)isSymbolCharacterOverridden;
- (int)bold;
- (void)setBold:(int)arg1;
- (BOOL)isBoldOverridden;
- (int)italic;
- (void)setItalic:(int)arg1;
- (BOOL)isItalicOverridden;
- (int)outline;
- (void)setOutline:(int)arg1;
- (BOOL)isOutlineOverridden;
- (int)embossed;
- (void)setEmbossed:(int)arg1;
- (BOOL)isEmbossedOverridden;
- (int)imprint;
- (void)setImprint:(int)arg1;
- (BOOL)isImprintOverridden;
- (int)shadow;
- (void)setShadow:(int)arg1;
- (BOOL)isShadowOverridden;
- (id)underlineColor;
- (void)setUnderlineColor:(id)arg1;
- (BOOL)isUnderlineColorOverridden;
- (unsigned short)kerning;
- (void)setKerning:(unsigned short)arg1;
- (BOOL)isKerningOverridden;
- (int)underline;
- (void)setUnderline:(int)arg1;
- (BOOL)isUnderlineOverridden;
- (int)strikeThrough;
- (void)setStrikeThrough:(int)arg1;
- (BOOL)isStrikeThroughOverridden;
- (int)doubleStrikeThrough;
- (void)setDoubleStrikeThrough:(int)arg1;
- (BOOL)isDoubleStrikeThroughOverridden;
- (BOOL)isHighlight;
- (void)setHighlight:(BOOL)arg1;
- (BOOL)isHighlightOverridden;
- (int)highlightColor;
- (void)setHighlightColor:(int)arg1;
- (BOOL)isHighlightColorOverridden;
- (int)smallCaps;
- (void)setSmallCaps:(int)arg1;
- (BOOL)isSmallCapsOverridden;
- (int)caps;
- (void)setCaps:(int)arg1;
- (BOOL)isCapsOverridden;
- (BOOL)isLowerCase;
- (void)setLowerCase:(BOOL)arg1;
- (BOOL)isLowerCaseOverridden;
- (int)hidden;
- (void)setHidden:(int)arg1;
- (BOOL)isHiddenOverridden;
- (short)spacing;
- (void)setSpacing:(short)arg1;
- (BOOL)isSpacingOverridden;
- (short)position;
- (void)setPosition:(short)arg1;
- (BOOL)isPositionOverridden;
- (unsigned short)fontSize;
- (void)setFontSize:(unsigned short)arg1;
- (BOOL)isFontSizeOverridden;
- (int)verticalAlign;
- (void)setVerticalAlign:(int)arg1;
- (BOOL)isVerticalAlignOverridden;
- (id)color;
- (void)setColor:(id)arg1;
- (BOOL)isColorOverridden;
- (BOOL)isColorAuto;
- (void)setColorAuto:(BOOL)arg1;
- (BOOL)isColorAutoOverridden;
- (int)languageForDefaultText;
- (void)setLanguageForDefaultText:(int)arg1;
- (BOOL)isLanguageForDefaultTextOverridden;
- (int)deleted;
- (void)setDeleted:(int)arg1;
- (BOOL)isDeletedOverridden;
- (int)edited;
- (void)setEdited:(int)arg1;
- (BOOL)isEditedOverridden;
- (int)formattingChanged;
- (void)setFormattingChanged:(int)arg1;
- (BOOL)isFormattingChangedOverridden;
- (BOOL)isSpecialCharacter;
- (void)setSpecialCharacter:(BOOL)arg1;
- (BOOL)isSpecialCharacterOverridden;
- (BOOL)isListCharacterPictureBullet;
- (void)setListCharacterPictureBullet:(BOOL)arg1;
- (BOOL)isListCharacterPictureBulletOverridden;
- (long)charPositionOfPictureBulletInBookmark;
- (void)setCharPositionOfPictureBulletInBookmark:(long)arg1;
- (BOOL)isCharPositionOfPictureBulletInBookmarkOverridden;
- (int)languageForFarEast;
- (void)setLanguageForFarEast:(int)arg1;
- (BOOL)isLanguageForFarEastOverridden;
- (int)languageForBiText;
- (void)setLanguageForBiText:(int)arg1;
- (BOOL)isLanguageForBiTextOverridden;
- (unsigned short)fontSizeForBiText;
- (void)setFontSizeForBiText:(unsigned short)arg1;
- (BOOL)isFontSizeForBiTextOverridden;
- (BOOL)embeddedObject;
- (void)setEmbeddedObject:(BOOL)arg1;
- (BOOL)isEmbeddedObjectOverridden;
- (BOOL)ole2;
- (void)setOle2:(BOOL)arg1;
- (BOOL)isOle2Overridden;
- (long)objectIDForOle2;
- (void)setObjectIDForOle2:(long)arg1;
- (BOOL)isObjectIDForOle2Overridden;
- (long)offsetToPictureData;
- (void)setOffsetToPictureData:(long)arg1;
- (BOOL)isOffsetToPictureDataOverridden;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyPropertiesInto:(id)arg1;

@end

