#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGMeasurement
@end
  
@interface SWGMeasurement : SWGObject

/* ORIGINAL Name of the variable for which we are creating the measurement records 
 */
@property(nonatomic) NSString* variable;
/* Application or device used to record the measurement values 
 */
@property(nonatomic) NSString* source;
/* Timestamp for the measurement event in epoch time 
 */
@property(nonatomic) NSNumber* timestamp;
/* Measurement value 
 */
@property(nonatomic) NSNumber* value;
/* Unit of Measurement 
 */
@property(nonatomic) NSString* unit;

@end
