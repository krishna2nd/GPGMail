/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class Account, ActivityMonitor, AuthScheme, Connection, NSArray, NSString;

@interface AccountSetupValidator : NSObject
{
    NSArray *_attempts;
    Account *_account;
    Connection *_connection;
    AuthScheme *_preferredAuthScheme;
    ActivityMonitor *_validationActivity;
    NSString *_password;
    BOOL _usedSSL;
    BOOL _shouldContinueWithInsecurePassword;
    id <AccountSetupValidatorDelegate> _delegate;
}

+ (id)validatorWithAccount:(id)arg1 accountInfo:(id)arg2 delegate:(id)arg3;
- (id)_initWithAccount:(id)arg1 accountInfo:(id)arg2 delegate:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)continueWithInsecurePassword;
- (void)cancel;
- (void)_sendValidatorDidChangeState:(id)arg1;
- (void)_sendValidatorDidFail;
- (void)_sendValidatorDidFinish;
- (void)_updateState:(long long)arg1;
- (BOOL)_connectIfNeeded;
- (void)_disconnect;
- (BOOL)_attemptInitialConnection;
- (BOOL)_attemptAuthentication;
- (void)_validate;
@property BOOL usedSSL; // @synthesize usedSSL=_usedSSL;
@property(copy) NSString *password; // @synthesize password=_password;
@property id <AccountSetupValidatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) AuthScheme *preferredAuthScheme; // @synthesize preferredAuthScheme=_preferredAuthScheme;
@property(retain) ActivityMonitor *validationActivity; // @synthesize validationActivity=_validationActivity;
@property(retain) Connection *connection; // @synthesize connection=_connection;
@property(retain) Account *account; // @synthesize account=_account;
@property(retain) NSArray *attempts; // @synthesize attempts=_attempts;

@end

