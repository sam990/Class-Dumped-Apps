//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWERxDisposable;

@interface AWERxData : NSObject
{
    struct vector<AWERxDisposable *, std::__1::allocator<AWERxDisposable *>> m_disposables;
    struct unordered_map<NSString *, AWERxDisposable *, OCStrHash, OCStrEqual, std::__1::allocator<std::__1::pair<NSString *const, AWERxDisposable *>>> m_disposables_map;
    AWERxDisposable *_steamDisposable;
}

@property(retain, nonatomic) AWERxDisposable *steamDisposable; // @synthesize steamDisposable=_steamDisposable;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
