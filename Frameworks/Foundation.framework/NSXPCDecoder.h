/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_xpc_object>, NSXPCConnection, NSXPCInterface;

@interface NSXPCDecoder : NSXPCCoder {
    struct { 
        unsigned long long offset; 
        int type; 
    long long _allowedClassesIndex;
    id _allowedClassesList[128];
    unsigned int _collectionPointer;
    struct { /* ? */ } *_collections[128];
    NSXPCConnection *_connection;
    void **_decoder;
    unsigned long long _genericIndex;
    NSXPCInterface *_interface;
    NSObject<OS_xpc_object> *_oolObjects;
    SEL _replyToSelector;
    } _rootObject;
}

@property NSXPCConnection * _connection;
@property(retain) NSXPCInterface * interface;
@property SEL replyToSelector;

+ (id)_createXPCObjectWithData:(id)arg1;

- (id)_connection;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (const char *)_decodeCStringForKey:(id)arg1;
- (id)_initWithRootXPCObject:(id)arg1;
- (void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(bool)arg3;
- (id)allowedClasses;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeInvocation;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { }*)arg1 forKey:(id)arg2;
- (void)finalize;
- (id)interface;
- (SEL)replyToSelector;
- (void)setInterface:(id)arg1;
- (void)setReplyToSelector:(SEL)arg1;
- (void)set_connection:(id)arg1;

@end
