
/* search */
.search{
    /* background-color: red; */
    width: 35vh;
    height: 6vh;
    margin-left: 85vh;
    
}

.srch-form #hsearch{
    background-color: transparent;
    /* color: red; */
    border-radius: 1vh;
    height: 4vh;;
    width: 100%;
    margin-top: 0.3rem;
    background-color: rgb(24, 35, 87);
    border: 2px solid black;
    opacity: 0.8;
}

#hsearch:hover{
    border: 2px solid #7B68EE;
    width: 120%;
}


/* user profile */
.user-profile{
    
    height: 70%;
    width: 8vh;
    margin-left: 15vh;
    
}
.user-profile img{
    height: 100%;
    width: 100%;
    border-radius: 10vh;
}
.user-profile img:hover{
    border: 2px solid white;
    
}

/* mobile responsive code */
@media screen and (max-width: 900px) {

    .container{
    /* background-color: black; */
    background-color: aqua;
    height: 13vh;
    width: 100%;
    display: flex;
    flex-flow: row;
    
}

.search{
    /* background-color: red; */
    width: 35vh;
    height: 6vh;
    margin-left: 15vh;
    
}


}