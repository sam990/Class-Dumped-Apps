//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PDFCImageDocument : NSObject
{
    struct Handle<std::__1::shared_ptr<PDFC::ImageDocument>, std::__1::shared_ptr<PDFC::ImageDocument>> _cppRefHandle;
}

+ (id)createImageDocument:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)cancelOperation;
- (id)saveIfModified:(id)arg1 includeMetadata:(_Bool)arg2;
- (id)getDocument;
- (long long)getTargetEncoding;
- (id)setTargetEncoding:(long long)arg1 quality:(id)arg2;
- (id)getTargetDataDescriptor;
- (void)setTargetDataDescriptor:(id)arg1;
- (id)getSourceDataDescriptor;
- (id)open;
- (id)initWithCpp:(const shared_ptr_781ebe8e *)arg1;

@end

