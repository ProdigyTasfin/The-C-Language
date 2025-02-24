from fastapi import FastAPI, UploadFile  
from pydantic import BaseModel  

app = FastAPI()  

class ResumeAnalysisRequest(BaseModel):  
    job_description: str  

@app.post("/analyze")  
async def analyze_resume(file: UploadFile, request: ResumeAnalysisRequest):  
    resume_text = parse_resume(file)  # Uses Rust for PDF parsing  
    score = ai_model.predict(resume_text, request.job_description)  
    return {"score": score, "feedback": "Add more metrics!"}  
