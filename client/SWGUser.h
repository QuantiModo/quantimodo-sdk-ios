#import <Foundation/Foundation.h>
#import "SWGObject.h"


@protocol SWGUser
@end
  
@interface SWGUser : SWGObject

/* User id 
 */
@property(nonatomic) NSNumber* _id;
/* Wordpress user id 
 */
@property(nonatomic) NSNumber* wpId;
/* User display name 
 */
@property(nonatomic) NSString* displayName;
/* User login name 
 */
@property(nonatomic) NSString* loginName;
/* User email 
 */
@property(nonatomic) NSString* email;
/* User token 
 */
@property(nonatomic) NSString* token;
/* Is user administrator 
 */
@property(nonatomic) NSNumber* administrator;

@end
