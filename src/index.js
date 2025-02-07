import mongoose from "mongoose";
import {DB_NAME} from './constant.js';
import express from "express" ;
import dotenv from "dotenv"
dotenv.config({
    path: './.env'
})

const app = express();
(async()=>{
    try {
      await mongoose.connect(`${process.env.MONGO_URL}/${DB_NAME}`) ; 
        app.on("error",()=>{
            console.log("we got an error");
            throw error ;
        })

        app.listen(process.env.PORT,()=>{
            console.log(`we are listening on the port ${process.env.PORT}`);
        })
    } catch (error) {
        console.log(`we caught an error ${error}`);
    }


})()
console.log("MongoDB URL:", process.env.MONGO_URL);   