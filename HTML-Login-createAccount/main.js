const createAccountForm = document.getElementById("createAccount");


function createAccountSection(){
    const login = document.getElementById("login");
    login.classList.add("form-hidden");
    const CreateAccount = document.getElementById("createAccount");
    CreateAccount.classList.remove("form-hidden");
}
function loginSection(){
    const login = document.getElementById("login");
    login.classList.remove("form-hidden");
    const CreateAccount = document.getElementById("createAccount");
    CreateAccount.classList.add("form-hidden");
}
function Emailincorrert(){
    const EmailErrorMassege = document.getElementById("email-error-massege");
    EmailErrorMassege.classList.remove("form-hidden");
    const EmailInput = document.getElementById("login-username-email");
    EmailInput.classList.add("form-input-error");
}
    // AJAX Peform 

    const loginContinue = document.getElementById("login-continue");
    loginContinue.onclick = Emailincorrert;

    const createAccountContinue = document.getElementById("createAccount-section");
    createAccountContinue.onclick = usernameError; 
    
    
    
function usernameError(){
    const createAccountUsername = document.getElementById("createAccountUsername");
    createAccountUsername.classList.add("form-input-error");
    const usernameErrorMessage = document.getElementById("form-input-error-message");
    usernameErrorMessage.classList.remove("form-hidden");
    emailcorrection();
};
function emailcorrection() {
    const createAccountEmailInput = document.getElementById("createAccountEmail");
    const emailRegex = /^\S+@\S+\.\S+$/; const email = "@" + ".com";
    const emailError = document.getElementById("email-error-message");
    
    if (createAccountEmailInput) {
      const email = createAccountEmailInput.value;
  
      if (emailRegex.test(email)) {
        createAccountEmailInput.classList.add("");
      } else {
        createAccountEmailInput.classList.add("form-email-error-message");
        emailError.classList.remove("form-hidden");

      }
    }
    passwordEqual();
  };

function passwordEqual(){
    const password = document.getElementById("password");
    const passwordConfirm = document.getElementById("passwordConfirm");
    const passwordError = document.getElementById("password-error-message");

    if(password.value === passwordConfirm.value){
        console.log ("loged in")
    }else{
        password.classList.add("form-password-error-message");
        passwordConfirm.classList.add("form-password-error-message");
        passwordError.classList.remove("form-hidden");
    }
};

