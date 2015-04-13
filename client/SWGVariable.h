#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGVariable
@end
  
@interface SWGVariable : SWGObject

/* User-defined variable display name. 
 */
@property(nonatomic) NSString* name;
/* Name used when the variable was originally created in the `variables` table. 
 */
@property(nonatomic) NSString* originalName;
/* Variable category like Mood, Sleep, Physical Activity, Treatment, Symptom, etc. 
 */
@property(nonatomic) NSString* category;
/* Abbreviated name of the default unit for the variable 
 */
@property(nonatomic) NSString* unit;
/* Comma-separated list of source names to limit variables to those sources 
 */
@property(nonatomic) NSString* sources;
/* Minimum reasonable value for this variable (uses default unit) 
 */
@property(nonatomic) NSNumber* minimumValue;
/* Maximum reasonable value for this variable (uses default unit) 
 */
@property(nonatomic) NSNumber* maximumValue;
/* How to aggregate measurements over time. 
 */
@property(nonatomic) NSString* combinationOperation;
/* Value for replacing null measurements 
 */
@property(nonatomic) NSNumber* fillingValue;

@end
