/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GQDWPTextLabel : NSObject
{
    struct __CFString *mFormat;
    int mLabelType;
    int mFirst;
}

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)dealloc;
- (struct __CFString *)format;
- (int)labelType;
- (int)first;

@end
