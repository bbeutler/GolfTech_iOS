@interface DualVideoPosition : NSObject
@property(nonatomic, readonly) NSTimeInterval position;
@property(nonatomic, readonly) NSTimeInterval position1;
@property(nonatomic, readonly) NSTimeInterval position2;
@property(nonatomic, readonly) NSTimeInterval duration;
@property(nonatomic, readonly) NSTimeInterval duration1;
@property(nonatomic, readonly) NSTimeInterval duration2;
@property(nonatomic, readonly) NSTimeInterval start;
@property(nonatomic, readonly) NSTimeInterval start1;
@property(nonatomic, readonly) NSTimeInterval start2;
@property(nonatomic, readonly) NSTimeInterval end;
@property(nonatomic, readonly) NSTimeInterval end1;
@property(nonatomic, readonly) NSTimeInterval end2;
@property(nonatomic, readonly) BOOL leftInRange;
@property(nonatomic, readonly) BOOL rightInRange;
@property(nonatomic, readonly) BOOL leftAlmostInRange;
@property(nonatomic, readonly) BOOL rightAlmostInRange;
- (id)initWithLeftDuration:(NSTimeInterval)duration1 rightDuration:(NSTimeInterval)duration2;
- (void)forwardInBothTo:(NSTimeInterval)newPosition;
- (void)forwardInLeftTo:(NSTimeInterval)newPosition;
- (void)forwardInRightTo:(NSTimeInterval)newPosition;
- (void)forwardInBoth:(NSTimeInterval)duration;
- (void)forwardInLeft:(NSTimeInterval)duration;
- (void)forwardInRight:(NSTimeInterval)duration;
- (void)forwardLeftPositionTo:(NSTimeInterval)left andRightPositionTo:(NSTimeInterval)right;
- (void)forwardPositionTo:(NSTimeInterval)position;
- (void)forwardLeftPositionTo:(NSTimeInterval)d;
- (void)forwardRightPositionTo:(NSTimeInterval)position;
- (void)playLeftPositionTo:(NSTimeInterval)position;
- (void)playRightPositionTo:(NSTimeInterval)position;
@end