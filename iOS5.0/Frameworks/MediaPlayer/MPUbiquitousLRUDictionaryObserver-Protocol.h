/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MPUbiquitousLRUDictionaryObserver <NSObject>
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)arg1;
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)arg1;
- (void)ubiquitousLRUStorageDidChangeExternally:(id)arg1 changedEntries:(id)arg2;
@end

