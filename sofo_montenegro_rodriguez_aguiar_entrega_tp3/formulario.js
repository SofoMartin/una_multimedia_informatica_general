var botonEnviar = document.querySelector('.boton-enviar');
var inputNombre = document.getElementById('nombre');
var inputEmail = document.getElementById('email');

const mensajes = { 
  mensajeCampo: "Completa el campo faltante",
  mensajeMail: "Mail incorrecto"
}

function validarCampoVacio(id) {
  const elemento = document.getElementById(id);

  if (elemento.value.length === 0) {
    elemento.classList.add('error');
  } else {
    elemento.classList.remove('error');
  }
}

  inputNombre.addEventListener('keyup', function() {
    if (inputNombre.value.length > 0) {
      inputNombre.classList.remove('error');
    }
  });

  inputNombre.addEventListener('blur', function() {
    validarCampoVacio('nombre');
  });

  inputEmail.addEventListener('keyup', function(){
    if (inputEmail.value.length > 0) {
      inputEmail.classList.remove('error');
    }
  });

  inputEmail.addEventListener('blur', function(){
    validarCampoVacio('email');
  });

  botonEnviar.addEventListener('click', function(event) {
    validarCampoVacio('nombre');
    validarCampoVacio('email');

    if (inputNombre.classList.contains('error') || inputEmail.classList.contains('error')){
      
      
      let mensajeError = document.getElementById("mensajeError")
      
      mensajeError.innerHTML = `<h3>${mensajes.mensajeCampo}</h3>`
      
    } else {
      alert('Enviar formulario');
    }
  });