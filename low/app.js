import express from "express";

const app=express();





app.get("/",(req,res)=>{
    res.send("Hello world");
});
app.get("/about",(req,res)=>{
    res.send("about");
});
app.get("/contact",(req,res)=>{
    res.send("contact");
});
app.get("/signin",(req,res)=>{
    res.send("Hello world");
});
app.get("/signup",(req,res)=>{
    res.send("Hello world");
});

app.listen(3000,()=>{
    console.log("server is listening at port 3000 ")
})