//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface MiniPBCoder : NSObject
{
    NSObject *m_obj;
    NSData *m_inputBuffer;
    struct MiniCodedInputData *m_inputData;
    NSMutableData *m_outputBuffer;
    struct MiniCodedOutputData *m_outputData;
    struct vector<MiniPBEncodeItem, std::__1::allocator<MiniPBEncodeItem>> *m_encodeItems;
}

+ (_Bool)isMiniPBCoderCompatibleType:(Class)arg1;
+ (_Bool)isMiniPBCoderCompatibleObject:(id)arg1;
+ (id)decodeContainerOfClass:(Class)arg1 withValueClass:(Class)arg2 fromData:(id)arg3;
+ (id)decodeObjectOfClass:(Class)arg1 fromData:(id)arg2;
+ (id)encodeDataWithObject:(id)arg1;
- (void).cxx_destruct;
- (id)decodeOneObject:(id)arg1 ofClass:(Class)arg2;
- (id)decodeOneDictionaryOfValueClass:(Class)arg1;
- (id)getEncodeData;
- (unsigned long long)prepareObjectForEncode:(id)arg1;
- (void)writeRootObject;
- (void)dealloc;
- (id)initForWritingWithTarget:(id)arg1;
- (id)initForReadingWithData:(id)arg1;

@end
