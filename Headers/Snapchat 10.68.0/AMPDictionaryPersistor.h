//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPFileSystem;

@interface AMPDictionaryPersistor : NSObject
{
    AMPFileSystem *_fileSystem;
}

@property(retain, nonatomic) AMPFileSystem *fileSystem; // @synthesize fileSystem=_fileSystem;
- (void).cxx_destruct;
- (id)clearDictionariesInDir:(id)arg1;
- (id)dictionariesInDir:(id)arg1;
- (void)saveDictionary:(id)arg1 toPath:(id)arg2;
- (id)dictionaryAtPath:(id)arg1;
- (id)initWithFileSystem:(id)arg1;

@end
