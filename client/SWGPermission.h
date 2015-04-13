#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGPermission
@end
  
@interface SWGPermission : SWGObject

/* Grant permission to target user or public so they may access measurements within the given parameters. TODO: Rename target to something more intuitive. 
 */
@property(nonatomic) NSNumber* target;
/* ORIGINAL Variable name 
 */
@property(nonatomic) NSString* variableName;
/* Earliest time when measurements will be accessible in epoch seconds 
 */
@property(nonatomic) NSNumber* min_timestamp;
/* Latest time when measurements will be accessible in epoch seconds 
 */
@property(nonatomic) NSNumber* max_timestamp;
/* Earliest time of day when measurements will be accessible in epoch seconds 
 */
@property(nonatomic) NSNumber* min_time_of_day;
/* Latest time of day when measurements will be accessible in epoch seconds 
 */
@property(nonatomic) NSNumber* max_time_of_day;
/* Maybe specifies if only weekday measurements should be accessible 
 */
@property(nonatomic) NSString* week;

@end
