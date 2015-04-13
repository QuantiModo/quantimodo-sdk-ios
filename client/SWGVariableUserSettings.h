#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGVariableUserSettings
@end
  
@interface SWGVariableUserSettings : SWGObject

/* User ID 
 */
@property(nonatomic) NSNumber* user;
/* Variable DISPLAY name 
 */
@property(nonatomic) NSString* variable;
/* Estimated duration of time following the onset delay in which a stimulus produces a perceivable effect 
 */
@property(nonatomic) NSNumber* durationOfAction;
/* fillingValue 
 */
@property(nonatomic) NSNumber* fillingValue;
/* joinWith 
 */
@property(nonatomic) NSString* joinWith;
/* maximumValue 
 */
@property(nonatomic) NSNumber* maximumValue;
/* minimumValue 
 */
@property(nonatomic) NSNumber* minimumValue;
/* name 
 */
@property(nonatomic) NSString* name;
/* onsetDelay 
 */
@property(nonatomic) NSNumber* onsetDelay;
/* unit 
 */
@property(nonatomic) NSString* unit;

@end
