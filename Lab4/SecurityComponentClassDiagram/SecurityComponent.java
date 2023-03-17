import java.util.Vector;

public class SecurityComponent extends UsersDataBase {

  public boolean connectionSecure;

    public Vector  myUsersDataBase;
    public Vector  myCryptoSystem;

  public boolean requestSecureConnection() {
  return false;
  }

  public boolean validateUserToken(String token) {
  return false;
  }

  public boolean changePassword(String userName, String newPassword, String oldPassword) {
  return false;
  }

}