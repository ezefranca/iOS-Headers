/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ToneKit/TKPickerTableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIColor, UIFont, UITextField;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate>
{
    BOOL _editable;
    id <TKVibrationPickerTableViewCellDelegate> _delegate;
    UIColor *_regularTextColor;
    UITextField *_removableTextField;
}

@property(retain, nonatomic, setter=_setRemovableTextField:) UITextField *_removableTextField; // @synthesize _removableTextField;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property(nonatomic) id <TKVibrationPickerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_makeRemovableTextFieldEditable:(BOOL)arg1;
- (void)willTransitionToState:(unsigned int)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)_layoutRemovableTextField;
- (void)makeTextFieldResignFirstResponderIfNeeded;
@property(readonly, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;
@property(nonatomic, getter=isChecked) BOOL checked;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(retain, nonatomic) UIFont *regularTextFont;
@property(retain, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) NSString *labelText;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end
