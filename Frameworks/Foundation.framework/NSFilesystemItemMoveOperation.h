/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSError;



@interface NSFilesystemItemMoveOperation : NSOperation 
{
    id _delegate;
    NSString *_sourcePath;
    NSString *_destinationPath;
    NSError *_error;
}

+ (id)_errorWithErrno:(NSInteger)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
+ (id)filesystemItemMoveOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;

- (void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)error;
- (void)_setError:(id)arg1;
- (void)main;

@end