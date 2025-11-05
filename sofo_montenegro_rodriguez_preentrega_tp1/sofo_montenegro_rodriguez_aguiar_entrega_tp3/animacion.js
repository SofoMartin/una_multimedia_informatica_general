document.addEventListener('DOMContentLoaded', () => {
    const body = document.body;
    const loader = document.createElement('div');
    loader.id = 'loader-overlay';
    body.prepend(loader); 

    setTimeout(() => {
        loader.classList.add('loader-oculto');
        body.classList.add('animacion-activa');
    }, 10);
    setTimeout(() => {
        loader.remove(); 
    }, 1500); 
});