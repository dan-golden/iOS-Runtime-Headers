/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSOperation;

@interface __NSOperationInternal : NSObject  {
    unsigned char __pad1[16];
    NSOperation *__outerOp;
    NSOperation *__prevOp;
    NSOperation *__nextOp;
    NSOperation *__nextPriOp;
    NSOperationQueue *__queue;
    id __dependencies;
    id __down_dependencies;
    long long __unfinished_deps;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __completion;

    void *__obsInfo;
    void *__implicitObsInfo;
    long long __seqno;
    double __thread_prio;
    int __RC;
    int __state;
    BOOL __prio;
    unsigned char __cached_isReady;
    unsigned char __isCancelled;
    unsigned char __isBarrier;
    unsigned char __pad2[4];
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } __wait_mutex;
    struct _opaque_pthread_cond_t { 
        long __sig; 
        BOOL __opaque[24]; 
    } __wait_cond;
    unsigned char __pad3[40];
}

+ (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned int)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7;

- (void)invalidate;
- (void)waitUntilFinished;
- (unsigned int)retainCount;
- (BOOL)isCancelled;
- (void)cancel;
- (id)retain;
- (void)dealloc;
- (oneway void)release;
- (id)init;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)setCompletionBlock:(id)arg1;
- (void)finalize;
- (void)start;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)__;
- (id)dependencies;
- (void)removeDependency:(id)arg1;
- (void)addDependency:(id)arg1;
- (void)waitUntilFinishedOrTimeout:(double)arg1;
- (void)setQueuePriority:(int)arg1;
- (int)queuePriority;
- (id)completionBlock;
- (void)setThreadPriority:(double)arg1;
- (double)threadPriority;
- (BOOL)isReady;

@end