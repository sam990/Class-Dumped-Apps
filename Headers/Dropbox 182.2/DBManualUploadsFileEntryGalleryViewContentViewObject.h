//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBFileEntryGalleryViewContentViewObject.h"

@class DBManualUploadsFileEntry, DBObserverHandle;

@interface DBManualUploadsFileEntryGalleryViewContentViewObject : DBFileEntryGalleryViewContentViewObject
{
    DBManualUploadsFileEntry *_manualUploadsEntry;
    DBObserverHandle *_uploadProgressObserver;
    _Bool _selectable;
    _Bool _peekPreviewable;
}

- (_Bool)isPeekPreviewable;
- (_Bool)isSelectable;
- (void).cxx_destruct;
- (void)progressTapCallbackWithButton:(id)arg1;
- (double)progress;
- (unsigned long long)subtitleStyle;
- (void)dealloc;
- (id)initWithModelObject:(id)arg1 modelContext:(id)arg2;

@end

