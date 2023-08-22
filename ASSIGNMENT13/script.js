function validateForm(){
    document.getElementById('form').addEventListener('submit', function(event) {
    const password = document.getElementById('password').value;
    const firstName=document.getElementById('firstName').value;
    const lastName=document.getElementById('lastName').value;
    const flag=0;


    if(firstName.charAt(0)!=firstName.charAt(0).toUpperCase()){
      event.preventDefault();
     alert("FirstName Character must be capital");
     return;
     flag+=1;
   }
   if(lastName.charAt(0)!=lastName.charAt(0).toUpperCase()){
    event.preventDefault();
     alert("LastName Character must be capital");
     return;
     flag+=1;
   }

    if (password.length < 8 || password.length > 15) {
    event.preventDefault();
    alert('Password must be between 8 and 15 characters.');
    return;
    flag+=1;
    }
    
    if (!/[A-Z]/.test(password) || !/\d/.test(password) || !/[!@#$%^&*]/.test(password)) {
    event.preventDefault();
    alert('Password must contain at least one uppercase letter, one number, and one special symbol.');
    return;
    flag+=1;
    }

    
   

   if (flag==0){
    alert("Successfully Login")
   }
    });
 
    }